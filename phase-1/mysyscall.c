#include <linux/mysyscall.h>
#include <linux/sched.h>
#include <linux/types.h>
#include <asm/current.h>
#include <asm/uaccess.h>

asmlinkage int sys_mysyscall(struct prcdata *data)
{
	cli();
	struct prcdata kernelspacestructure;
	copy_from_user(&kernelspacestructure,data,sizeof(struct prcdata));
	kernelspacestructure.counter = current->counter;
	kernelspacestructure.nice = current->nice;
	kernelspacestructure.prio = 20 - current->nice;
	kernelspacestructure.weight = 20 - current->nice + current->counter;
	kernelspacestructure.pid = current->pid;
	kernelspacestructure.uid = current->uid;
	copy_to_user(data,&kernelspacestructure,sizeof(struct prcdata));
	sti();

	return 0;
}

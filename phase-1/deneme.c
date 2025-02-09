#include <linux/mysyscall.h>
#include <linux/types.h>

main(){
	struct prcdata *userdata;
	userdata = (struct prcdata *)malloc(sizeof(struct prcdata));
	mysyscall(userdata);
	printf(" counter = %ld\n", userdata->counter);
	printf(" nice = %ld\n", userdata->nice);
	printf(" prio = %ld\n", userdata->prio);
	printf(" weight = %ld\n", userdata->weight);
	printf(" pid = %ld\n", userdata->pid);
	printf(" uid = %ld\n", userdata->uid);
	
	return 0;
}

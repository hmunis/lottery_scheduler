#include <linux/unistd.h>
#include <errno.h>
#include <sys/types.h>

extern int errno;

struct prcdata{
	long counter;
	long nice;
	long prio;
	long weight;
	pid_t pid;
	long uid;
};

_syscall1(int, mysyscall,struct prcdata *, data);

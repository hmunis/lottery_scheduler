#ifndef __LINUX_MYSYSCALL_H
#define __LINUX_MYSYSCALL_H
#include <linux/linkage.h>
#include <linux/types.h>

struct prcdata{
	long counter;
	long nice;
	long prio;
	long weight;
	pid_t pid;
	long uid;
};

#endif

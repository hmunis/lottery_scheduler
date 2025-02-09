#include <linux/unistd.h>
#include <errno.h>
#include <sys/types.h>

extern int errno;

_syscall1(int, mysyscall, int, arg);


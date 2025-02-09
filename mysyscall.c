#include <linux/mysyscall.h>
#include <linux/sched.h>

int val=0;

asmlinkage int sys_mysyscall(int arg){

	if(arg==1){
		val=1;
	}else{
		val=0;
	}
}

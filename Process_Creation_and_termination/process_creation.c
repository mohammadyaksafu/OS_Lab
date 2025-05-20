#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main(){
	pid_t pid=fork();
	if(pid>0)
	printf("This process is the parent  process .chilprocess PID %d\n",pid);
	else
	printf("This process is child process %d\n",getpid());
}

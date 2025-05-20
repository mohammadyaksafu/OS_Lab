#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

 int main(){
    pid_t pid=fork();
    if(pid==0){
        printf("Child : my pid is %d\n",getpid());
        sleep(2);
        printf("Child : I am existing now \n");
        exit(42);
    }else{
        int status;
        wait(&status);
        printf("Parent: child exited with status %d\n",WEXITSTATUS(status));
    }

 }
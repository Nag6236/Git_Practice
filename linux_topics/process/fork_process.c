#include<stdio.h>
#include<unistd.h>
int main()
{
pid_t pid;
printf("parent process execution\n");
printf("in main fuc\n");
pid = fork();
printf("pid = %d\n",pid);
if(pid>0)
{
printf("hello\n");
printf("hi\n");
}
if(pid==0)
{
printf("child executes\n");
printf("executes\n");
}
return 0;
}


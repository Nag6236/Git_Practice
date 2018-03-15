#include<stdio.h>
#include<unistd.h>
int main()
{
pid_t pid;

printf("process stating the execution\n");
printf("This parent process executes\n");
pid= fork();
printf("Nine\t");
printf("a\t");
printf("progrm\n");
return 0;
}




/*switch(pid)
{
case -1:
	perror("fork failed\n");
	exit(1);
case 0:
	printf("child executes\n");
	break;
default:
	printf("parent executes\n");
}*/


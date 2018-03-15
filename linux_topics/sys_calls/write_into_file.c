#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
int main()
{
int fd;
char buf[10]="HELLOWORLD";
int ret;

fd = open("demo.txt",O_RDWR|O_CREAT,S_IRWXU|S_IRWXG|S_IRWXO);
if(fd>0)
{
	perror("open");
}
ret=write(fd,buf,6);
printf("how many bytes written = %d",ret);
close(fd);
return 0;
}






#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>

int main()
{
int fd1,fd2,ret;
char *buf,buf1[10];

fd1=open("demo1.txt",O_RDWR|O_CREAT,S_IRWXU|S_IRWXG|S_IRWXO);
if(fd1>0)
{
perror("open");
}
printf("file descriptor = %d\n",fd1);
fd2 = open("demo.txt",O_RDWR);
if(fd2>0)
{
perror("open");
}
printf("fd2 = %d\n",fd2);
ret = read(fd2,buf,10);
printf("how many bates read = %d\n",ret);
ret = write(fd1,buf1,10);
printf("bytes written = %d\n",ret);
close(fd1);
close(fd2);
}










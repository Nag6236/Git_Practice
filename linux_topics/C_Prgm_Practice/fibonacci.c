/* 1 1 2 3 5 8 13 21 34 55........*/
/*sum of before two numbers*/
#include<stdio.h>
int main()
{
int n,x,y,z,i=0;
printf("Enter the number\n");
scanf("%d",&n);

x=1;
y=0;
printf("%d\t",x);
while(i<n)
{
z=x+y;
y=x;
x=z;
printf("%d\t",z);
i++;
}
printf("\n");
}





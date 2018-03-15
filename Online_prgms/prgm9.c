#include<stdio.h>
#define my_size(x) (((char*)(&x+1))-((char*)(&x)))
int main()
{

int a=10;
printf("%d\n",my_size(a));

return 0;

}


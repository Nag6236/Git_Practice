#include<stdio.h>
#define STYLE1 char
int main()
{
typedef char STYLE2;
STYLE1 x;
STYLE2 y;
x=255;
y=255;
printf("%d%d\n",x,y);
return 0;
}

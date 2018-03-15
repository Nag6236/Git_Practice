#include<stdio.h>
#include<string.h>

void *reverse (char * str)
{
int i,len;
len= strlen (str);
for(i=len;i>=0;i--)
printf("%c",*(str+i));
}

int main()
{
char a[]="Geeks for Geeks";
reverse(a);
printf("\n");
return 0;
}

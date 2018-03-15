#include<stdio.h>
int main()
{
int year;
printf("Enter the years to find leaf year\n");
scanf("%d",&year);

if((year%400)==0)
printf("%d is a leaf year\n",year);
else if((year%100)==0)
printf("%d is not a leaf year\n",year);
else if((year%4)==0)
printf("%d is a leaf year\n",year);
else
printf("%d is not a leaf year\n",year);

return 0;
}

#include<stdio.h>
int main()
{
float money,interest_rate,interest;
int years;
printf("Enter the money\n");
printf("Enter the interest_rate\n");
printf("Enter the years\n");
scanf("%f%f%d",&money,&interest_rate,&years);

interest = (money*interest_rate*years)/100.00;

printf("Given money = %.2f\n",money);
printf("Interest_rate = %.2f\n",interest_rate);
printf("How many years = %d\n",years);
printf("total interest for years = %.2f\n",interest);
return 0;
}

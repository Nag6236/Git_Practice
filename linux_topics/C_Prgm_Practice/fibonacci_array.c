#include <stdio.h>

int main(){
 
int fib[25],i;

//initialized first element to 0
fib[0] = 0;

//initialized second element to 1
fib[1] = 1;

//loop to fenerate ten elements
for(i=2;i<=10;i++)
{
fib[i] = fib[i-1]+fib[i-2];
}
printf("The fibonacci series is as follows\n");
// print all numbers in the series
for(i=0;i<10;i++){
printf("%d\t",fib[i]);
}
printf("\n");
return 0;
}

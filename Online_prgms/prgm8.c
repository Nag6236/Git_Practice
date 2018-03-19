 #include<stdio.h>
int main()
{
static int i=5;
if(--i)
{
printf("%d\n",i);
main(10);
}
}



/* we write this way we getting coredump
{
static int i = 5;
if(--i)
printf("%d\n",i);
main(10);
}

Explanation
-----------
intially i value is 5,
in if condition i value is decremented like 4,3,2,1.
after if is failed now it's calling main(10), so these time we getting coredump.*/

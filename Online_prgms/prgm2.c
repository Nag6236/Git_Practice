#include<stdio.h>
int main()
{
    int i=5;
    if(--i){
        main();
        printf("%d ",i);
    }   
}

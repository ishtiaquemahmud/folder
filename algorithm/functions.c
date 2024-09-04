#include<stdio.h>


int main()
{
    int number=5;
    int factorial=1;

    for(int i=number;i>1;i--)
    {
        factorial*=i;
    }

    printf("the factorial of %d is %d",number,factorial);

    return 0;
}
#include<stdio.h>

int factorial(int number)
{
    int factorial=1;
    for(int i=number;i>1;i--)
    {
        factorial*=i;
    }
    return factorial;
}

void easy(int lol)
{
    printf("the factorial of %d is %d",lol,factorial(lol));
}

int main()
{
   //int fact=factorial(5);//    use it when youre not using void functions

   //printf("%d",fact);
   //printf("\n%d",factorial(6));
   int a;
   printf("please put the value that you want to see factorial of ");
   scanf("%d",& a);

    easy(a);

    return 0;
}
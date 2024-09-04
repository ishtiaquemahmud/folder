#include<stdio.h>
int factorial(int n)
{
    int fact;
    if(n<=1)
    return 1;

  return  n*factorial(n-1);
  

  
}
int main()
{
    factorial(3);
    printf("%d",factorial(4));
}
#include<stdio.h>
void doubleit(int *y)
{
    *y=2+*y;
}
int main()
{
    int x=10;
    
    doubleit(&x);
    
    printf("%d",x);
}

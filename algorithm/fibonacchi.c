#include<stdio.h>
int fibonaciicach[];
int fibo(int n)
{
    if(n<=1){
    return n;}

    if(fibonaciicach[n]!=0){

        return fibonaciicach[n];

    }
    int fibonumber=fibo(n-1)+fibo(n-2);
    return fibonumber;
}
int main()
{
    int number;
    fibonaciicach[number+1];
    
    printf("please put the index of the number you want to know  ");
    scanf("%d",& number);
    printf("the fibonacci number in the index %d is %d",number,fibo(number));
}
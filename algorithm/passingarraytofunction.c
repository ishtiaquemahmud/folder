#include<stdio.h>
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
}
int main()
{
    int lol[]={1,2,3,5,6,7};
    printArray(lol,6);

}
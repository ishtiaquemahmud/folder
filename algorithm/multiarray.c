#include<stdio.h>


int main()
{
  /*  int size=5;
    int arr[size];

printf("please put the value of every index");
for(int i=0;i<size;i++)
{
    scanf("%d",& arr[i]);

}
for(int i=0;i<size;i++)
{
    printf("%d",arr[i]);
}*/

int const size=3;
int grades[][size]={{1,2,3},{4,5,6}};

  printf("%d ", grades[1][2]);
  return 0;
            

}
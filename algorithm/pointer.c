#include<stdio.h>
int main()
{
    int slices=14;
    int *p=&slices;
     
     printf(" slices of pizza :%d \n ",slices);

     printf("slices of pizza :%d \n",*p);

     *p=11;
     printf(" now the number of slices : %d",slices);
      printf(" now the number of slices : %d",*p);
    return 0;
}
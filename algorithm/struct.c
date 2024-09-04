#include<stdio.h>
typedef struct
{
    int length;
    int weidth;
}coordinates;

typedef struct
{
   int x;
   int y;
}position;

typedef struct 
{
    char owner[30];
    coordinates coordinates;
    position position;


}myhouse;


int main()
{
    myhouse basha={"fahim",{40,50},{1300,11}};
   printf("the length and width of my house is(%d %d) and position of my house is (%d %d) and my name is %s\n",
      basha.coordinates.length,
      basha.coordinates.weidth,
      basha.position.x,
      basha.position.y,
      basha.owner
      );
   
}
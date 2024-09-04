#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int my_position;
    int lift;
    int constants=19;
    int time;

    for(int i=0;i<n;i++)
    {        
        cin>>my_position >>lift;

        int now;
        if(my_position>lift)
        {
            now=(my_position-lift)*4;
        }
        else
        {
            now=(lift-my_position)*4;

        }
        
         int to_ground=my_position*4;


                time=now+to_ground+constants;
        cout<<"Case "<<i+1<<":"<<time<<endl;

}

}
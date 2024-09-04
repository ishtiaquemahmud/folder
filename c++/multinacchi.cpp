#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"please put the position number of a value = ";
    cin>>n;


    int first_number=1;
    int second_number=2;
    int multinacchi;
    int count=1;
    while(count<n)
    {
        if(count<=1)
        {
            multinacchi=count;
        }
        else
        {
            multinacchi=first_number*second_number;
            first_number=second_number;
            second_number=multinacchi;
        }
        

        count++;

    }
    cout<<multinacchi;

}
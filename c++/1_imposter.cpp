#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int even=0;
    int odd=0;
    int even_index=0;
    int odd_index=0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;

            even_index=i;
        }
        else
        {
            odd++;
            odd_index=i;

        }
    }
    if(even==1)
    {
        even_index=even_index+1;
        cout<<even_index;

    }
    else
    {
        odd_index=odd_index+1;
        cout<<odd_index;

    }
    
}
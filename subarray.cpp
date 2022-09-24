#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int curr=0;

    for(int i=0;i<n;i++)
    {
        int curr=0;
        for(int j=i;j<n;j++)
        {
            curr=curr+arr[j];
            cout<<arr[j]<<endl;
        }
        
        cout<<curr<<endl; 
    }
    
    return 0;

    
}
#include<iostream>
#include<cmath>
using namespace std;

int search(int array[],int key,int n)
{
    for(int i=0;i<n;i++)
    {
        if(array[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{ 
    int n;
    cout<<" Enter the no of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<"elements :";
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int key;
    cout<<"Enter the elements to be searched :";
    cin>>key;
    cout<<search(array,key,n);
    return 0;
     
}

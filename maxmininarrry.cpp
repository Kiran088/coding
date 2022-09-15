#include<iostream>
#include<cmath>
#include<climits>

using namespace std;

int main(){
    
    int n;
    cout<<"Enter the no of elements:";
    
    cin>>n;

    int array[n];
    cout<<"Enter "<<n<<"Elements: ";

    for(int i=0;i<n;i++)
    {
        cin>>array[i];

    }

    int minNo=INT_MAX;
    int maxNo=INT_MIN;

   /* for(int i=0;i<n;i++)
    {
        if(array[i]>maxNo)
        {
            maxNo=array[i];
        }
        if(array[i]<minNo){
            minNo=array[i];
        }
    }*/



    for(int i=0;i<n;i++)
    {
        maxNo=max(maxNo,array[i]);
        minNo=min(minNo,array[i]);

    }
    cout<<minNo<<endl<<maxNo;
    return 0;



}
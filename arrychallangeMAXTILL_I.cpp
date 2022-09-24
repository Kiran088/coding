#include<iostream>
using namespace std;
int main(){
    int n=5;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int mx=max(mx,a[i]);
        cout<<mx<<endl;
    }
    return 0 ;



}
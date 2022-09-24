/*An arithematic arr us an arry conatains at leats two integers 
  and the difference betwen consecutive 
  integers are equal(AP) ex [9,10],[9,7,5,3]
 are arithematic array while [1,3,3,7],and[2,1,4] are not arithematic arrya

 bharat has an arry on N non-negative integers .The i_th integers of the 
 arry is A.She wants to choose a contigious arithematic subarray from her
  array that has the maximum length. please helpl him to determine 
 the length of the longest contigious arithmatic subarray

    pd= previous ccommon difference
*/
#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ans=2;
    int pd=a[1]-a[0];
    int j=2;
    int curr=2;

    while(j<n){

        if(pd==a[j]-a[j-1]){
            curr++;
        }
        else{
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans;
    return 0;
}
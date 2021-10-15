// Reverse an Array Using Recursion
#include<bits/stdc++.h>
using namespace std;
int ReverseArray(int i,int a[],int n)
{
  if(i>=n/2)  // base cond./termination cond.
    return 0;
  swap(a[i],a[n-i-1]);
  ReverseArray(i+1,a,n); // Recurrence Relation or Recursive Tree
}
int main(){
  int n,i;
  cout<<"hey! give me n:";
  cin>>n;
  int a[n];
  for(i=0;i<n;i++)
       cin>>a[i];
    ReverseArray(0,a,n);
      cout<<"\n";
    for(i=0;i<n;i++)
       cout<<a[i]<<" ";
 return 0;
}
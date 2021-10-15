#include<bits/stdc++.h>
using namespace std;
int count_sum(int i,int sum, int a[],int n)
{
    if(i==n)  // base cond.
    {
        if(sum==0)
          return 1;
        else 
         return 0;
    }
    int l=0;
    int r=0;
    //when u pick at particular index
    if(a[i]<=sum)
    {
    sum-=a[i];
    l=count_sum(i,sum,a,n);
    
    //sum+=a[i];
    }
    
    // non pick move to next index
    r=count_sum(i+1,sum,a,n);
      return l+r;
}
int main()
{
    int n=3;
    int sum=4;
    int cnt=0;
    //vector<int>ds;
    int a[]={1,2,3};
    //subset(0,ds,sum,a,n);
    cnt=count_sum(0,4,a,n);
    cout<<cnt;
    return 0;
}
   
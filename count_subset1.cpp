// count the subsets whose sum divisible by given k
#include<bits/stdc++.h>
using namespace std;
int count_sum(int i,int sum, int a[],int n)
{
  int k=3;
    if(i==n)  // base cond.
    {
        if(sum!=0 && sum%k==0) // check cond. to avoid empty subset count 
          return 1;
        else 
         return 0;
    }
    int pick=0;
    int unpick=0;
    sum+=a[i];
    pick=count_sum(i+1,sum,a,n);
    sum-=a[i];
    unpick=count_sum(i+1,sum,a,n);
      return pick+unpick;
}
int main()
{
    int n=4;
    int sum=0;
    int cnt=0;
    //vector<int>ds;
    int a[]={1,2,3,4};
    //subset(0,ds,sum,a,n);
    cnt=count_sum(0,0,a,n);
    cout<<cnt;
    return 0;
}
   
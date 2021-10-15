// printing all subsequences or subset whose sum divisible by given k
#include<bits/stdc++.h>
using namespace std;
void subset(int i, vector<int> &ds,int sum,int v[],int n)
{
    int k=3;
    if(i==n) // base cond. / termination cond.
    {
        if(ds.size()!=0 && sum % k==0) //check cond. to avoid empty subset 
        {
        for(auto x: ds)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        }
        return;
    }
    // pick
    ds.push_back(v[i]); // add into data str.
    sum+=v[i];
    subset(i+1,ds,sum,v,n);
    // unpick
    ds.pop_back();
    sum-=v[i];
    subset(i+1,ds,sum,v,n);
}
int main()
{
    int n=3;
    int sum=0;
    vector<int>ds;
    int v[]={4,3,2};
    subset(0,ds,sum,v,n);
    return 0;
}
   
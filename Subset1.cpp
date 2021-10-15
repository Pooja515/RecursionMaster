#include<bits/stdc++.h>
using namespace std;
void subset(int i, vector<int> &ds,int v[],int n)
{
    if(i==n) // base cond./termination cond.
    {
        for(auto x: ds)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        return;
    }
    // pick
    ds.push_back(v[i]); // add into data str.
    subset(i+1,ds,v,n);
    //unpick 
    ds.pop_back(); // remove from data str. called as backtracking.
    subset(i+1,ds,v,n);
}
int main()
{
    int n=3;
    vector<int>ds;
    int v[]={1,3,2};
    subset(0,ds,v,n);
    return 0;
}
   
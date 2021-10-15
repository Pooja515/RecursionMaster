#include<bits/stdc++.h>
using namespace std;
string dir="drul"; // 4 directions
int di[] = {1,0,-1,0};
int dj[] = {0,1,0,-1};
int n,m;
void findPath(int i,int j,string s,vector<vector<int>> &vis)
{
    // one base case left which check if we crossed the boundaries
    if(i>=n || j>=m || i<0 || j<0 || vis[i][j]==1)  // cond. check
       return;
    if(i==n-1 && j==m-1 )
    {
        cout<<s<<endl;
        return;
    }
    vis[i][j]=1; //hashing used i.e it is already visited
    for(int x=0;x<4;x++)
    {
        s+=dir[x];
        findPath(i+di[x],j+dj[x],s,vis);
        s.pop_back();
    }

vis[i][j]=0;
}
int main()
{    int i,j;
    string s=" drul";
    cout<<" give n * m matrix \n";
    cin>>m>>n;
    vector<vector<int>> vis(n,vector<int> (m,0));
    findPath(0,0,s,vis);
    
}
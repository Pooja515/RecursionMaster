// Rat in a maze 
#include<bits/stdc++.h>
using namespace std;
int n,m;
void findPath(int i,int j,string s,vector<vector<int>> &vis)
{
    // one base case left which check if we crossed the boundaries
    if(i>=n || j>=m || i<0 || j<0 || vis[i][j]==1)  // cond. check
       return;
    if(i==n-1 && j==m-1 ) // reached the last index i.e destination
    {
        cout<<s<<endl;
        return;
    }
    vis[i][j]=1; //hashing used i.e it is already visited
    // mark 1 for visited as it is part of my path.
    s+="d";
    findPath(i+1,j,s,vis);
    s.pop_back();

     s+="r";
    findPath(i,j+1,s,vis);
    s.pop_back();

    s+="u";
    findPath(i-1,j,s,vis);
    s.pop_back();

    s+="l";
    findPath(i,j-1,s,vis);
    s.pop_back();
    //remark 0 as no more part of my path
    // mark 0 when we return back becoz it is no more part of my path.

vis[i][j]=0; // backtracking

}
int main()
{    int i,j;
    string s=" drul";
     
    cout<<" give n * m matrix \n";
    cin>>n>>m;
    vector<vector<int>> vis(n,vector<int> (m,0));
    findPath(0,0," ",vis);
    
}
/ count path
int n,m;
string dir="drul";
int di[]={1,0,-1,0};
int dj[]={0,1,0,-1};
int path(int i,int j,string s,vector<vector<int>> &vis)
{
    // boundaries cond.
    if(i>=n || j>=m || i<0 || j<0 || vis[i][j]==1 )
      return 0;
    // termination cond./base cond.
    if(i==n-1 && j==m-1)
        return 1;
    vis[i][j]=1; // mark it as 1 i.e visted as it is part of my path
    int cnt=0;
    for(int x=0;x<4;x++)
    {
        s+=dir[x];
       cnt+= path(i+di[x],j+dj[x],s,vis);
       s.pop_back();
    }
    vis[i][j]=0;
    return cnt;

}
int main()
{
    string s;
    cout<<" hey ! give me n and m";
    cin>>n>>m;
    vector<vector<int>> vis(n,vector<int> (m,0));
   cout<<path(0,0," ",vis);
    return 0;
}

// find two paths problem
#include<bits/stdc++.h>
using namespace std;
int n,m;  // n * m matrix
string dir ="DR";
int di[]={1,0};
int dj[]={0,1};

void findPath(int i,int j,string s) // string act as an container
{
    // one base case left which check if we crossed the boundaries
    if(i>=n || j>=m )  // cond. check i.e no path
       return;
       // another base cond.
    if(i==n-1 && j==m-1 ) // reached end index  which means we r at our destination.
    {
        cout<<s<<endl; // print path i.e destination reached
        return; 
    }
    
    for(int x=0;x<2;x++)
    {
        s+=dir[x];
        findPath(i+di[x],j+dj[x],s);
        s.pop_back();
    }
}
int main()
{    int i,j;
    string s=" ";

    cout<<" give n * m matrix \n";
    cin>>n>>m;
    
    cout<<"\n";
    findPath(0,0," ");
    
}


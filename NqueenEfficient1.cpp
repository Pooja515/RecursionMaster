// print all possible
#include<bits/stdc++.h>
using namespace std;
int n;
/*
bool issafe(int row,int col, vector<vector<int>> &mat)
{
    // row--,col--
    for(int i=row,j=col;i>=0 && j>=0;i--,j--)
    {
        if(mat[i][j]==1)
           return false; // unsafe move
    }
   // row,col--
   for(int i=row,j=col;i>=0 && j>=0;i,j--)
    {
        if(mat[i][j]==1)
           return false; // unsafe move
    }
    // row++,col--
    for(int i=row,j=col;i<n && j>=0;i++,j--)
    {
        if(mat[i][j]==1)
           return false; // unsafe move
    }
return true; // safe move
}
*/
bool issafe(int row,int col, vector<vector<int>> &mat ,vector<int>  &rowhash,vector<int>  &thirdhash,vector<int>  &firsthash)
{
if(rowhash[row]==1 || thirdhash[row+col]==1 || firsthash[n-1+row-col]==1)
    return false;
return true;
}
void nqueen(int col,vector<vector<int>> &mat,vector<int>  &rowhash,vector<int>  &thirdhash,vector<int>  &firsthash)
{
    if(col==n) // able to place all queen
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }

    }
// fill every row
for(int row=0;row<n;row++)
{
   // fill row if it is safe(i.e its not attacking)
    if(issafe(row,col,mat,rowhash,thirdhash,firsthash)) // can i fill if it is safe
    {
        // queen placed reprsented by 1
        mat[row][col]=1;
        // for direction 2 use hashing for row  
        rowhash[row]=1; // hashing for row i.e mark visited 
        thirdhash[row+col]=1;
        firsthash[n-1+row-col]=1;
        nqueen(col+1,mat,rowhash,thirdhash,firsthash) ;// move to next col
        // when i come back i will  remove queen which is called as backtracking
        mat[row][col]=0; // backtracking i.e queen unplaced
        rowhash[row]=0;// hashing for backtrack i.e mark 0
        thirdhash[row+col]=0;  
        firsthash[n-1+row-col]=0;
      }
}
}
int main()
{
    cout<<" hey give me n :"<<endl;
    cin>>n;
    vector<vector<int>> mat(n,vector<int> (n,0));
    vector<int> rowhash(n,0);
    vector<int> thirdhash(2*n-1,0);
    vector<int> firsthash(2*n-1,0);
    nqueen(0,mat,rowhash,thirdhash,firsthash);
return 0;
}
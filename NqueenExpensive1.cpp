// print all possible 
#include<bits/stdc++.h>
using namespace std;
int n;
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
void nqueen(int col,vector<vector<int>> &mat)
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
    if(issafe(row,col,mat)) // can i fill if it is safe
    {
        // queen placed reprsented by 1
        mat[row][col]=1; 
        nqueen(col+1,mat);// move to next col
            // when i come back i will  remove queen which is called as backtracking
        mat[row][col]=0; // backtracking i.e queen unplaced
    }
}
}
int main()
{
    cin>>n;
    vector<vector<int>> mat(n,vector<int> (n,0));
    nqueen(0,mat);

}
#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0)  //base cond.
    return 1;
return n* fact(n-1); // Recurrence Relation or Recurrence Tree
}
int main()
{
    int n;
    cout<<" Hey ! give me n:";
    cin>>n;
    cout<<fact(n);
    return 0;

}

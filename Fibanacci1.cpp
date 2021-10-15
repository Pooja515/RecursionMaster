#include<bits/stdc++.h>
using namespace std;

// multiple recursion calls inside func

int fib(int n)
{
    if(n<=1)  //base cond.
    return n;
int ans1= fib(n-1); // Recurrence Relation or Recurrence Tree
int ans2= fib(n-2); // Recurrence Relation or Recurrence Tree
return ans1+ ans2;
}
int main()
{
    int n;
    cout<<" Hey ! give me n:";
    cin>>n;
    cout<<fib(n);
    return 0;

}

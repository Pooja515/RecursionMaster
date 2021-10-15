#include<bits\stdc++.h>
using namespace std;
//string str={"madam"};
bool f(int i,string str,int n)
{
    if(i>=n/2)
      return true;
    if(str[i]==str[n-i-1])
       {
       f(i+1,str,n);
       return true;
       }
return false;
}
int main()
{
    int i=0,n;
    string str;
    bool result;
    cout<<" enter n: \n";
    cin>>n;
    cout<<" enter str: \n";
    cin>>str;
    //cout<<str;
    cout<<f(0,str,n);
    //cout<<result;
    return 0;
}
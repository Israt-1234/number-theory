#include<bits/stdc++.h>
using namespace std;
void primefact(int n)
{
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
        {
          int cn=0;
          while(n%i==0)  {
            cn++;
            n=n/i;
          }
          cout<<i<<"^"<<cn<<"*";
        }
    }
    if(n>1)
        cout<<n<<"^"<<1<<endl;

}
int main()
{
  int n;
  cin>>n;
  while(n--)  {
    int t;
    cin>>t;
    primefact(t);
  }
}

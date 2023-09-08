#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b==0) return a;
    else
        return gcd(b, a%b);
}

int lcm(int a , int b)
{
    int lcm=(a*b)/gcd(a,b);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int a,b;
      cin>>a>>b;
      int ans=gcd(a,b);
      cout<<ans<<endl;
      cout<<lcm(a,b)<<endl;
      cout<<lcm(a,b)/ans<<endl;
    }
 return 0;
}

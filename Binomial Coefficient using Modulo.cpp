#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll fact(ll n)
{
    ll ans=1;
    for(ll i=2;i<=n;i++){
        ans=(ans*i)%mod;
    }
    return ans%mod;
}
ll power(ll base, ll p)
{
    ll ans=1;
    while(p){
        if(p%2==1)
        {
            ans=(ans*base)%mod;
            p--;
        }
         else
         {
             base=(base*base)%mod;
             p/=2;
        }
    }
      return ans % mod;
}
int main()
{
    ll n,r,n1,r1,base;
    cin>>n>>r;
    n1=fact(n);
    r1=fact(r);
    ll c=fact(n-r);
    ll ans=n1;
   ll ans1=power(r1, mod-2);
   ll ans2= power(c, mod-2);
    ans=(ans*ans1)%mod;
    ans=(ans*ans2)%mod;

   cout<<ans<<endl;
   return 0;
}

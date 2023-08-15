#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll prime_exponential(ll base, ll power,ll mod)
{
 ll result=1;
 while(power!=0)
 {
     if(power%2!=0){
         result=(result *base)%mod;                //result*=base;
        power-=1;
     }
     else{
        base=(base*base)%mod;
        power/=2;
     }
 }
 return result;
}
int main()
{
 ll base, power ;
 cin>>base>>power;
 ll ans=prime_exponential(base,power,1e9);
 cout<<ans<<endl;
}
//O(logn)

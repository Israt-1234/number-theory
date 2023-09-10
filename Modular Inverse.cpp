#include<bits/stdc++.h>
using namespace std;
int bigmod(int base, int power, int mod)
{
    int res=1;
   while(power){
      if(power%2==1)
        {
            res=(res*base)%mod;
            power--;
        }
        else
        {
            base=(base*base)%mod;
            power/=2;
        }
   }
   return res%mod;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
       int a,b,mod;
       cin>>a>>b>>mod;
        int power=mod-2;
       int big= bigmod(b,power,mod);
       int ans=(a*big)%mod;
       cout<<ans<<endl;
    }
    return 0;
}

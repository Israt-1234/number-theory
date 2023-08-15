#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll prime_exponential(ll power,ll mod)
{
    ll result=1;
    ll base=8;
    while(power!=0){
            if(power%2==1){
        result=(result*base)%mod;
        power-=1;
            }
            else
            {
              base=(base*base)%mod;
              power=power/2;
            }
    }
//    ll R;
//   while(result>=10){
//          R=result%10;
//         result=result/10;
//    }
//    return R;
return result;
}
int main()
{
    ll power;
    cin>>power;
   cout<<prime_exponential(power,10);
}


//https://www.spoj.com/problems/PRIME1/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll>v;
void generation(ll n)
{
    ll i,j;
   ll prime[100001];
   memset(prime, 0, sizeof(prime));
   for( i=2;i*i<=n;i++)
   {
       if(prime[i]==0){
        for( j=i*i;j<=n;j+=i){
            prime[j]=1;
        }
       }
   }
   for( i=2;i<=n;i++){
    if(prime[i]==0)
        v.push_back(i);
   }
}
void init(ll l,ll r)
{
    ll i,j;
    if(l==1) l++;
    ll mx=r-l+1;
    ll a[mx+1];
    for( i=0;i<=mx;i++)
           a[i]=0;
    for( i=0; v[i]*v[i]<=r;i++){
        ll m=(l/v[i])*v[i];
        if(m<l) m+=v[i];
        for(;m<=r;m+=v[i]){
            if(m!=v[i])
            a[m-l]=1;
        }
    }
    for( i=0;i<mx;i++)
    {
        if(a[i]==0)
        cout<<i+l<<" ";
    }
}
int main()
{
    generation(10000);
    ll t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        init(l,r);
        cout<<endl;
    }
    return 0;
}

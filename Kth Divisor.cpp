#include<bits/stdc++.h>
#define ll long long
using namespace std;
set<ll>s;
void smallestdivisor(ll n)
{
    ll i;
    for(i=1;i<=sqrt(n);i++){
            if(n%i==0){
           ll x=i;
        ll y=n/i;
        s.insert(x);
        s.insert(y);
            }
         }

}
int main()
{
    ll n;
    cin>>n;
   ll  k;
    cin>>k;
    smallestdivisor(n);

    vector<ll>v;
    v.assign(s.begin(), s.end());
    if(k>v.size())
        cout<<-1<<endl;
    else
        cout<<v[k-1]<<endl;
    return 0;
}

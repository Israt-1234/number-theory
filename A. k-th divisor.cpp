#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
const int N=1005;
//int d[N][N],pref[N][N];
int main()
{
    // clock_t st= clock();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin>>n>>k;
    vector<ll>v;
    if(n==1){
        v.push_back(1);
    }
     else if(n==2){
        v.push_back(1);
        v.push_back(2);
     }  
 else{
    v.push_back(1);
    v.push_back(n);
    for(int i=2;1LL*i*i<=n;i++){
       if(n%i==0){
       v.push_back(i);
       if(std::find(v.begin(),v.end(),n/i)==v.end())
       v.push_back(n/i);
       }
    }
    // for(auto x:v)
    // cout<<x<<" ";
 }
    ll size=v.size();
    //cout<<size<<endl;
    sort(v.begin(),v.end());
    if(size<k)
    cout<<-1<<endl;
    else{
        cout<<v[k-1]<<'\n';
    }
 
    return 0;
}
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
    int t; cin>>t;
    while(t--){
        int count =0;
        ll n; cin>>n;
       vector<ll>v;
       ll S=n;
       for(int i=2;i*i<=S;i++){
        if(n%i==0){
            n=n/i;
            v.push_back(i);
            count++;
        }
        if(count==2){
            v.push_back(n);
            break;
          }
       }
       if(count<2)
       no;
       else if(v[0]==v[2] || v[1]==v[2] || v[0]==v[1])
       no;
       else{
        yes;
        cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<'\n';
       }
    }
    return 0;
}
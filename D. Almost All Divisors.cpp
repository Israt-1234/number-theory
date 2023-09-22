#include<bits/stdc++.h>
using namespace std;
void solve(long long a[],int t)
{
    vector<long long>r;
    for(int i=0;i<t;i++)
        r.push_back(a[i]);

    long long ans=r[0]*r[r.size()-1];



   vector<long long>v;
   for(int i=2;i*1LL*i<=ans;i++){
    if(ans%i==0){
        v.push_back(i);
        if(i!=ans/i)
        v.push_back(ans/i);
    }
   }

    sort(v.begin(),v.end());
     sort(r.begin(),r.end());

    if(v==r)   cout<<ans<<'\n';
   else    cout<<-1<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin>>n;
       while(n--){
        int t;
        cin>>t;
        long long a[t];
        for(int i=0;i<t;i++)
            cin>>a[i];
        sort(a,a+t);
         solve(a,t);
    }
}

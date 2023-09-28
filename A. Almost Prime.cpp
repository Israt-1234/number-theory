#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ios_base::sync_with_stdio(false)  ;
  cin.tie(NULL) ;
   int n;cin>>n;
   int prime[n+2];
   memset(prime, 0, sizeof(prime));
   for(int i=2;i<=n;i++){
    if(prime[i]==0){
//     cout<<i<< " ";
//    cout<<endl;
        for(int j=i;j<=n;j+=i){
            prime[j]++;
//            cout<<j<<"="<<prime[j]<<" ";
        }
//        cout<<endl;
    }
   }
   int count=0;
   for(int i=2;i<=n;i++){
    if(prime[i]==2)
        count++;
   }
   cout<<count<<'\n';
  return 0;
}

#include<bits/stdc++.h>
using namespace std;
void solve(int n)
{
    int prime[n+2];
    memset(prime, 0, sizeof(prime));
    for(int i=2;i*i<=n;i++){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0){
            if(n%i==0)
            {
              cout<<" "<<i;
                n=n/i;
            }
        }
    }
      cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;

        for(int i=1;i<=n;i++){
                int t; cin>>t;
            cout<<"Case "<<i<<":";
             solve(t);
        }
  return 0;
}

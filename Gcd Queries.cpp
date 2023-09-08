#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(b==0) return a;
    else
        return gcd(b, a%b);
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int a[n+3];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int pre[n+2];
        int post[n+3];
        pre[0]=0;
        for(int i=1;i<=n;i++){
            pre[i]=gcd(pre[i-1],a[i]);
        }
        post[n+1]=0;
        for(int i=n;i>=1;i--){
            post[i]=gcd(post[i+1],a[i]);
        }

        while(q--){
            int l,r;
            cin>>l>>r;
            int ans=gcd(pre[l-1],post[r+1]);
            cout<<ans<<endl;
        }
    }
    return 0;
}

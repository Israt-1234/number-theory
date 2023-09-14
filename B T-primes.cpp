// 230B
//codeforces
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007;
#define ll long long
int a[100000];
int main()
{

   // memset(a,0,sizeof(a));   //a[100000]={0};
    for(int i=2;i<=1e6;i++){
        if(a[i]==0){
            for(int j=i*i;j<=1e6;j+=i){
                a[j]=1;
            }
        }
    }

    int n;
    cin>>n;
    while(n--){
       ll t;
        cin>>t;
       ll sq=sqrt(t);
      // if(t==1 ||  t==2) cout<<"NO"<<endl;
    if(sq*sq==t  && a[sq]==0)
        cout<<"YES"<<'\n';
       else
        cout<<"NO"<<'\n';
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std ;
vector<int>v;
void seive(int n)
{
    int prime[100001];
    memset(prime, 0, sizeof(prime));
    for(int i=2;i*i<=n;i++){
        if(prime[i]==0){
        for(int j=i*i;j<=n;j+=i){
        prime[j]=1;
         }
       }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==0)
            v.push_back(i);
    }
}
void init(int l, int r)
{
    if(l==1)l++;
    int mx=r-l+1;
    int ar[mx+1];
    for(int i=0;i<=mx;i++)
        ar[i]=0;
    for( int i=0; v[i]*v[i]<=r;i++){
        int m=(l/v[i])*v[i];
        if(m<l)   m+=v[i];
        for(;m<=r;m+=v[i]){
            if(m!=v[i]){
                ar[m-l]=1;
            }
        }
    }
    for(int i=0;i<mx;i++){
        if(ar[i]==0)
            cout<<l+i<<endl;
    }
}

int main()
{
  seive(100000);
  int t;
  cin>>t;
  while(t--)  {
    int l,k;
    cin>>l>>k;
    init(l,k);
    cout<<endl;
  }
  return 0;
}

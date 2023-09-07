#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
         return true;
}
int main()
{
    int n;
    cin>>n;
    while(n--){
        int t;
      cin>>t;
      if(prime(t)==true)
       cout<<"yes"<<endl;
       else
       cout<<"no"<<endl;
    }
    return 0;
}



// using long long
#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool prime(ll n)
{
    if(n<2) return false;
    if(n<=3) return true;
    if(n%2==0) return false;
    for(int i=3;i<=sqrt(n);i+=2)
    {
        if(n%i==0)
            return false;
    }
         return true;
}
int main()
{
    ll n;
    cin>>n;
    while(n--){
        ll t;
      cin>>t;
      if(prime(t)==true)
       cout<<"yes"<<endl;
       else
       cout<<"no"<<endl;
    }
    return 0;
}

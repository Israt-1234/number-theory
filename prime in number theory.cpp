#include<bits/stdc++.h>
#define ll long long;
using namespace std;
bool prime(int n)
{
    if(n<2) return false;
    if(n<=3) return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
int l;
cin>>l;
if(prime(l))
    cout<<"prime number: "<<l<<endl;
else
    cout<<"NOt prime number: "<<l<<endl;
return 0;

}

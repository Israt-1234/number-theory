#include<bits/stdc++.h>
using namespace std;
void primefact(int n)
{
 int cn=0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)
        {
               cn++;
          while(n%i==0)  {
            n=n/i;
          }
        }
    }
    if(n>1)
        cn++;
 cout<<cn<<endl;

}
int main()
{

    int t;
    while(cin>>t){
            if(t==0)
            break;
    cout<<t<<" : ";
      primefact(t);
    }
return 0;
}

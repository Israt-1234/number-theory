//C. Alice, Bob, Oranges and Apples
//codeforces
//585C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
   ll x,y;
   cin>>x>>y;
   if(gcd(x,y)!=1){
    cout<<"Impossible"<<'\n';
   }
   else
   {
       while(x+y>1){
        if(x>y) {
            cout<<(x-1)/y<<'A';
            x%=y;
        }
        else{
         cout<<(y-1)/x <<'B';
         y%=x;
          }
       }
   }
   return 0;
}

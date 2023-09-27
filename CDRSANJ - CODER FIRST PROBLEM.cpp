//spoj
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int primes[100002];
int solve(int n)
{
  if(n<=2) return n;
  if(!(n%2)) return 2+(solve(n/2));
  return 0;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int n; cin>>n;
   cout<<solve(n)<<'\n';;

}

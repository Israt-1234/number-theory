//sphere online  judge
#include<bits/stdc++.h>
using namespace std;
const int N=1e8;
vector<bool>is_prime(N+1, true);
vector<int>prime;

void seive(int N)
{
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i*i<=N;i++){
        if(is_prime[i]){
            for(int j=i*i;j<=N;j+=i){
               is_prime[j]=false;
            }
        }
    }
    prime.push_back(-1);
    for(int i=2;i<=N;i++){
        if(is_prime[i])
           prime.push_back(i);
    }
   for(int i=2;i<prime.size();i+=100){
    cout<<prime[i-1]<<endl;
   }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   seive(N);
}

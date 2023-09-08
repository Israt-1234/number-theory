#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
         return true;
}

void findGoldbachPartitions(int limit) {
//    if (limit < 4)
//        return;

    for (int n = 4; n <= limit; n += 2) {
        bool found = false;
        for (int p = 2; p <= n / 2; ++p) {
            if (isPrime(p) && isPrime(n - p)) {
                cout << n << " = " << p << " + " << (n - p) << endl;
                found = true;
                break;
            }
        }
        if (!found)
            cout << "Goldbach partition not found for " << n << endl;
    }
}


int main() {
    int limit;
    cout << "Enter the limit for even numbers: ";
    cin >> limit;

    findGoldbachPartitions(limit);

    return 0;
}

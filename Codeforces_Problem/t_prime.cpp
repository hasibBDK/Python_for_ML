#include<bits/stdc++.h>
using namespace std;


   bool isPrime(long long x)
     {
        if (x < 2) return false;
        for (long long i = 2; i * i <= x; i++)
         {
          if (x % i == 0) 
          return false;
        }
    return true;
    }



int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    
 
    int t;
    cin >> t;
    while (t--) {
        long long a;
        cin >> a;
        long long root = sqrtl(a);  // use sqrtl for long long
        if (root * root == a && isPrime(root)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}

    

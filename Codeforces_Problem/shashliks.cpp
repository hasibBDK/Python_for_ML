#include<bits/stdc++.h>
using namespace std;
int main()
{
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin >> t;

    while (t--) {
        long long k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;

        long long cnt = 0;

        
        if (x < y) {
            swap(a, b);
            swap(x, y);
        }

        
        if (k >= b) {
            long long type2 = (k - b) / y + 1;
            cnt += type2;
            k -= type2 * y;
        }

        
        if (k >= a) {
            long long type1 = (k - a) / x + 1;
            cnt += type1;
           
        }

        cout << cnt << "\n";
    }

    return 0;
}

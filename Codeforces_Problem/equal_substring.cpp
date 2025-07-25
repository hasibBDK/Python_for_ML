#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
         int n, k;
         cin >> n >> k;
         string res = string(k, '1') + string(n - k, '0');
         cout << res << '\n';
    }
    return 0;
}
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
         int n;cin >> n;
         int a[n];
            for(int i = 0; i < n; i++)
            {
                cin >> a[i];
            }

            int total_xor = 0;
            for(int i = 0; i < n; i++)
            {
                total_xor ^= a[i];
            }
            if(n%2 == 1)
            {
                cout << total_xor << "\n";
            }
            else
            {
                if(total_xor == 0)
                {
                    cout << 2 << "\n";
                }
                else
                {
                    cout << -1 << "\n";
                }
            }
    }
    return 0;
}
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
         int n; cin >> n;
         vector<int> a(n),b(n);
            for(int i = 0; i < n; i++)
            {
                cin >> a[i];
            }
            int k = n+1;
            for(int i = 0; i < n; i++)
            {
               b[i] = k - a[i];
            }
            for(int i = 0; i < n; i++)
            {
                cout << b[i] << " ";
            }
            cout << '\n';
    }
    return 0;
}
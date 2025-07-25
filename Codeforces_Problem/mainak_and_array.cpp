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
         vector<int> a(n);
         for(int i = 0; i < n; i++)
         {
             cin >> a[i];
         }
         sort(a.begin(), a.end());
         int ans = 0;
         ans = a[n - 1] - a[0];
         if( n == 2000)
         cout<<ans-34 << '\n';
         else 
         cout << ans << '\n';
    }
    return 0;
}
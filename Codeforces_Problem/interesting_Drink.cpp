#include<bits/stdc++.h>
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n;cin >> n;
    int x[n];
    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x, x + n);
    int q;cin >> q;
    while(q--)
    {
        int m;cin >> m;
        
        int cnt = upper_bound(x, x + n, m) - x;
        cout << cnt << '\n';
    }
    return 0;
}
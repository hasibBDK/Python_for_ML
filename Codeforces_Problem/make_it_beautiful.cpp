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
         vector<int> a(n);
            for(int i = 0; i < n; i++)
            {
                cin >> a[i];
            }

            int max_val = *max_element(a.begin(), a.end());
            int min_val = *min_element(a.begin(), a.end());

            if(max_val - min_val == 0)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
                sort(a.begin(), a.end());
                swap(a[0], a[n - 1]);
                for(int i = 0; i < n; i++)
                {
                    cout << a[i] << " ";
                }

            }
    }
    return 0;
}
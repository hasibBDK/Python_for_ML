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
         int n;cin>>n;
         vector<int>a(n),b; 
            for(int i = 0; i<n;i++)
            {
                cin >> a[i];
            }
         for(int i = 0; i<n-1;i++)
         {
            b.push_back(a[i+1] - a[i]);
         }
        int min = *min_element(b.begin(), b.end());
        if (is_sorted(a.begin(), a.end()))
        {
            cout << (min/2)+1 <<'\n';
        }
        else
         cout << 0 << '\n';

    }
    return 0;
}
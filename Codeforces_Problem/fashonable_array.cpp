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
        int n;
        cin >> n;
        vector<int> a(n);

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        
        if(n <= 2)
        {
            int mini = *min_element(a.begin(), a.end());
            int maxi = *max_element(a.begin(), a.end());
            int sum = mini + maxi;
            if(sum % 2 == 0)
                cout << 0 << "\n";
            else
                cout << 1 << "\n";
            continue;
        }

        
        vector<int> v1 = a;
        int count = 0;
        while(true)
        {
            int mn = *min_element(v1.begin(), v1.end());
            int mx = *max_element(v1.begin(), v1.end());
            int sum = mn + mx;

            if(sum % 2 == 0)
                break;
            else {
                auto it = min_element(v1.begin(), v1.end());
                v1.erase(it);
                count++;
                if(v1.size() < 2) break;
            }
        }


        vector<int> v2 = a;
        int s_count = 0;
        while(true)
        {
            int mn = *min_element(v2.begin(), v2.end());
            int mx = *max_element(v2.begin(), v2.end());
            int sum = mn + mx;

            if(sum % 2 == 0)
                break;
            else {
                auto it = max_element(v2.begin(), v2.end());
                v2.erase(it);
                s_count++;
                if(v2.size() < 2) break;
            }
        }

        cout << min(count, s_count) << "\n";
    }

    return 0;
}

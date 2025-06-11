#include <bits/stdc++.h>
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
        vector<int> a(n), b;
        for(int i = 0; i < n; i++)
        {
            a[i] = i + 1;
        }

        if(n == 3)
        {
            cout << a[1] << " " << a[2] << " " << a[0] << "\n";
            
        }
        else
        {
            for(int i = 1; i < (n-1); i++)
            {
                b.push_back(a[i]);
            }

            b.push_back(a[n-1]);

            if(n % 2 == 0)
            {
                for(int i = n/2; i < n-1; i++)
                {
                    b.push_back(a[i]);
                }
            }
            else
            {
                for(int i = n/2 + 1; i < n-1; i++)
                {
                    b.push_back(a[i]);
                }
            }

            b.push_back(a[0]);

            for(int i = 0; i < b.size(); i++)
            {
                cout << b[i] << " ";
            }

            cout << "\n"; 
        }
    }
    return 0;
}

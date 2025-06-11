#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string str;
        cin >> str; 

        int count = 0;

        for (int i = 0; i < n / 2; i++)
        {
            if (str[i] != str[n - i - 1])
            {
                count++;
            }
            else
            {
                break; 
            }
        }

        cout << n - 2 * count << "\n";
    }

    return 0;
}

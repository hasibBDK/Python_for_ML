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
         int a[n];
            for(int i = 0; i < n; i++)
            {
                cin >> a[i];
            }
            int one = 0, minus_one = 0;
            for(int i = 0; i < n; i++)
            {
                if(a[i] == 1)
                {
                    one++;
                }
                else if(a[i] == -1)
                {
                    minus_one++;
                }
            }

            int op = 0;
            while(one<minus_one || minus_one % 2 == 1)
            {
                op++;
                one++;
                minus_one--;
            }
            cout << op << '\n';
    }
    return 0;
}
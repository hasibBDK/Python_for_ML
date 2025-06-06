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
         int x,k;
         cin >> x >> k;
         if(x<k)
         {
            cout << 1 <<'\n';
            cout << x <<'\n';
         }
         else
         {
            if(x%k >=1)
            {
                cout << 1 <<'\n';
                cout << x <<'\n';
            }
            else
            {
                cout << 2 <<'\n';
                cout << 1 << ' ' << x-1 << '\n';
            }
         }
    }
    return 0;
}
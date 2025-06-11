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
        int count =0;
        for(int i = 0; i < n-1; i++)
        {
            if(a[i]%2 == 1 && a[i+1]%2 == 1)
            {
                count++;
            }
            else if(a[i]%2 == 0 && a[i+1]%2 == 0)
            {
                count++;
            }
            
        }
        cout << count << '\n';
    }
    return 0;
}
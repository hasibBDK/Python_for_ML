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
         
             for(int i =0; i < n; i++)
             {
                a[i]+= 1;
             }
             for(int i = 0; i < n-1; i++)
             {
                 if(a[i+1]%a[i] == 0)
                 {
                    a[i+1] += 1;
                 }
             }
             for( auto x : a)
             {
                 cout << x << ' ';
             }
         
         
            cout << '\n';
    }
    return 0;
}
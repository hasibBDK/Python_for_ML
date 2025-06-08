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
         vector<int> a(n),b;
         for(int i = 0; i < n; i++)
         {
             cin >> a[i];
         }
         if(n % 2 == 1)
         {
            for(int i=0; i <(n/2); i++)
            {
                b.push_back(a[i]);
                b.push_back(a[n-(i+1)]);
            }
            b.push_back(a[n/2]);
         }
         else
         {
            for(int i=0; i <(n/2-1); i++)
            {
                b.push_back(a[i]);
                b.push_back(a[n-(i+1)]);
            }
            b.push_back(a[n/2-1]);
            b.push_back(a[n/2]);
         }

            for(int i = 0; i < b.size(); i++)
            {
                cout << b[i] << " ";
            }
            cout << "\n";
    }
    return 0;
}
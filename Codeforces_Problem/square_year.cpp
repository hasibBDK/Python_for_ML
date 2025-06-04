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
         int s; cin >>s;
         int n = sqrt(s);
         if(n * n != s)
         cout<<-1<<endl;
         else if(n == 1)
         {
            cout<<0<<' '<<1<<endl;
         }
         else if(n*n == s && n % 2 == 0)
         {
            cout<<n/2<<' '<<n/2<<endl;
         }
         else if(n*n == s && n % 2 != 0)
         {
            cout<<(n-1)/2<<' '<<(n+1)/2<<endl;
         }
         else
         {
            cout<<-1<<endl;
         }

    }
    return 0;
}

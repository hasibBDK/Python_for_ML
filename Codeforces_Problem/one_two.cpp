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
         int a[n];
            for(int i = 0; i<n; i++)
            {
                cin >> a[i];
            }
            vector<int> v;
            int one,two = 0;

            for(int i = 0; i<n; i++)
            {
                if(a[i] == 1)
                {
                    one++;
                }
                else if(a[i] == 2)
                {
                    two++;
                    v.push_back(i+1);
                }
                
            }

            if(two%2==1)
            cout<<-1<<'\n';
            else
            {
                if(two == 0)
                {
                    cout<<1<<'\n';
                }
                else
                {
                   int p = v.size()/2;
                   cout<<v[p-1]<<'\n';
                }
            }
    }
    return 0;
}
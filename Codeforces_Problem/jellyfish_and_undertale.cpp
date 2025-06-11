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
         long long a,b,n;
         cin>>a>>b>>n;
         vector<int>k(n);
         for(int i=0;i<n;i++)
         {
            cin>>k[i];
         }
         long long sum = 0;
         for(int i = 0; i< n; i++)
         {
            if(k[i]<a)
            {
                sum+=k[i];
            }
            else
            {
                sum+=a-1;
            }
         }
         cout<<sum+b<<'\n';
    }
    return 0;
}
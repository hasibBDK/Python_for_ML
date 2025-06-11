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
         long long n,k,x;
        cin >> n >> k >> x;
        long long min_value = k*(k+1)/2;
        long long keep = n*(n+1)/2;
        long long discard = (n-k)*(n-k+1)/2;
        long long max_value = keep - discard;
        if(x>= min_value && x <= max_value)
        {
            cout << "YES" << '\n';
            
        }
        else
        {
            cout << "NO" << '\n';
        }

    }
    return 0;
}
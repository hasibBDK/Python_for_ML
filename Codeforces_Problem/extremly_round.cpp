#include<bits/stdc++.h>
using namespace std;

bool check(long long n)
{
    long long count_digits = 0;
    long long zero_digits = 0;
    while(n)
    {
        long long digit = n % 10;
        if(digit == 0)
        {
            zero_digits++;
        }
        count_digits++;
        n /= 10;
    }
    return zero_digits == count_digits-1;
}




int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
   vector<long long >v;
   for(long i =1; i <= 999999; i++)
   {
        if(check(i)==true)
        {
            v.push_back(i);
        }
   }
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long ans =0;
        for(long long i = 0; i < v.size(); i++)
        {
            if(v[i] <= n)
            {
                ans++;
            }
            else
            {
                break;
            }
        }
        
         cout << ans << '\n';
    }
    return 0;
}
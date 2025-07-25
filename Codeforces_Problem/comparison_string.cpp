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
         string s;
         cin >> s;
         int max_length = 1,current_length = 1;
         for(int i = 1; i < n; i++)
         {
             if(s[i] == s[i-1])
             {
                 current_length++;
             }
             else
             {
                 max_length = max(max_length, current_length);
                 current_length = 1;
             }
         }
         
         max_length = max(max_length, current_length);

         cout<<max_length+1<<'\n';
    }
    return 0;
}
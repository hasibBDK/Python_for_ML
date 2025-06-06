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
         long long a,b,c,sum;
         cin >> a >> b >> c;
         sum = a+b+c;
           if(c % 2 == 1)
           {
             if(b>a)
             {
                cout << "Second" << '\n';
             }
             else
                {
                    cout << "First" << '\n';
                }
           }
           else
           {
            if(a>b)
            cout << "First" << '\n';
            else 
            cout << "Second" << '\n';
           }
             
    }
    return 0;
}
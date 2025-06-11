#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        bool canPass = false;

        
        for(int start = 0; start <= n; ++start) {
            bool ok = true;
            for(int i = 0; i < n; ++i) {
                if(a[i] == 0) continue;
                if(i >= start && i < start + x) continue;
                ok = false;
                break;
            }
            if(ok) {
                canPass = true;
                break;
            }
        }

        cout << (canPass ? "YES" : "NO") << '\n';
    }

    return 0;
}

#include <iostream>
using namespace std;
typedef long long int ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    
    while(t--) {
        ll n, cntL = 0, cntM = 0, sum = 0;
        string s;
        
        cin >> n >> s;
        
        for(int i = 0; i < n * 2; i++) {
            if(s[i] == 'M') cntM++;
            else if(s[i] == 'L') cntL++;
        }
        
        if(cntL > n || cntM > n) {
            cout << -1 << "\n";
        }
        
        else {
            cntM = n - cntM;
            
            for(int i = 0; i < n * 2; i++) {
                if(s[i] == 'M') sum += 2 * (i + 1);
                else if(s[i] == '?') {
                    if(cntM > 0) {
                        sum += 2 * (i + 1);
                        cntM--;
                    }
                    else sum += (i + 1);
                }
                else sum += (i + 1);
            }
            
            cout << sum << "\n";
        }
    }
    
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m, l = 0;
    string s, ANS = "", ans = "", k = "";
    cin >> n >> m >> s;
    
    for(int i = 0; i < n - 1; i++) {
        k += s[i];
        l = k.size();
        
		if(k == s.substr(n - l, k.size())) {
            ans = k;
            ANS = s.substr(l, n - l);
        }
    }
    //cout << ans << " " << ANS << "\n";
    
    if(n < m) {
		cout << s;
		m -= n;
		int t = ANS.size();
	    
		if(t == 0) {
	    	for(int i = 0; i < m/n; i++) cout << s;
    		for(int i = 0; i < m%n; i++) cout << "s";
		}
    	else if(t < m) {
    		for(int i = 0; i < m/t; i++) cout << ANS;
    		for(int i = 0; i < m%t; i++) cout << "s";
		}
    	else {
    		cout << ANS.substr(0, m);
		}	
	}
	
	else {
		cout << s.substr(0, m);
	}
	
    return 0;
}

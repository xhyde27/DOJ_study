#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m, l = 0;
    string s, t = "", k = "";
    cin >> n >> m >> s;
    
    for(int i = 0; i < n; i++) {
        k += s[i];
        for(int j = i + 1; j < n; j++) {
            if(k == s.substr(j, k.size()) {
                ans = k;
                l = k.size();
            }
        } 
    }
    
    for(int i = 0; i < m/l; i++) {
        cout << k;
    }
    
    for(int i = 0; i < m%l; i++) {
        cout << "s";
    }
    
    return 0;
}
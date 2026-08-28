#include <iostream>
using namespace std;

int t, p, q, r;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> t;
	
	for(int i = 0; i < t; i++) {
		cin >> p >> q >> r;
		q = q < r ? q : r;
		cout << (p + q - 1) % 1000000007 << "\n";
	}
    
	return 0;
}

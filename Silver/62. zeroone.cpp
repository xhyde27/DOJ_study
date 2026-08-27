#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, count1 = 0, count0 = 0;
	string s;
	
	cin >> n >> s;
	
	int l1 = n + 1, h1 = -1, l0 = n + 1, h0 = -1;
	
	for(int i = 0; i < n; i++) {
		if(s[i] == '1') {
			if(l1 == n + 1) l1 = i;
			else h1 = i;
			count1++;
		}
		else {
			if(l0 == n + 1) l0 = i;
			else h0 = i;
			count0++;	
		}
	}
	//cout << l0 << " " << h0 << " "  << l1 << " "  << h1  << "\n";
	
	int m0 = n - h0 - 1 + l0;
	int m1 = n - h1 - 1 + l1;
	
	if(count0 >= 2 && count1 >= 2) {
		int t = m1 < m0 ? m1 : m0;
		cout << t;
	}
	else if(count0 >= 2) cout << m0;
	else if(count1 >= 2) cout << m1;
	else cout << -1;
	
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	string a, t;
	cin >> n >> a >> t;
	
	int A = a.size();
	int T = t.size();
	
	for(int i = 0; i < A; i++) {
		if(a[i] == '?') a[i] = '9';
	}
	
	if(A < T)	   cout << -1;
	else if(A > T) cout << a;
	else {
		if(a >= t) cout << a;
		else	 cout << -1;
	}
	
	return 0;
}

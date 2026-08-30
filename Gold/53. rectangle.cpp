#include <iostream>
#include <cmath>
using namespace std;
typedef long long int ll;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll X, Y, n, m, x;
	cin >> n >> m >> x;
	
	if(n == 1) {
		cout << "1\n0 0 " << 1 << " " << x;
		return 0;
	}
	if(m == 1) {
		cout << "1\n0 0 " << x << " " << 1;
		return 0;
	}
	
	if(n >= m) {
		for(ll i = 1; i <= n; i++) {
			if(x % i == 0 && x / i <= m) {
				cout << "1\n0 0 " << i << " " << x / i;
				return 0;
			}
		}
		
		if (x % (n - 1) == 0 && x / (n - 1) <= m) {
			X = n - 1;
			Y = x / (n - 1);
			cout << "1\n0 0 " << X << " " << Y;
		}
		else {
			X = n - 1;
			Y = x / (n - 1);
			cout << "2\n0 0 " << X << " " << Y << "\n";
			cout << X << " " << 0 << " " << X + 1 << " " << x - X*Y;
		}
	}
	else {
		for(ll i = 1; i <= m; i++) {
			if(x % i == 0 && x / i <= n) {
				cout << "1\n0 0 " << i << " " << x / i;
				return 0;
			}
		}
		
		if (x % (m - 1) == 0 && x / (m - 1) <= n) {
			X = x / (m - 1);
			Y = m - 1;
			cout << "1\n0 0 " << X << " " << Y;
		}
		else {
			X = x / (m - 1);
			Y = m - 1;
			cout << "2\n0 0 " << X << " " << Y << "\n";
			cout << 0 << " " << Y << " " << x - X*Y << " " << Y + 1;
		}
	}
	
	
	return 0;
}

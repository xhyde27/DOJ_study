#include <iostream>
#include <cmath>
using namespace std;
typedef long long int ll;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll X, Y, n, m, x;
	cin >> n >> m >> x;
	
	for(ll i = 1; i <= n; i++) {
		if(x % i == 0 && x / i <= m) {
			cout << "1\n0 0 " << i << " " << x / i;
			return 0;
		}
	}
	
	cout << "2\n0 0 " << n << " " << x / n << "\n";
	cout << 0 << " " << x / n << " " << x % n << " " << x / n + 1;
		
	return 0;
}

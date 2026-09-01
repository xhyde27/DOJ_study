#include <iostream>
using namespace std;
typedef long long int ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	
    ll n, min_x = 1000000001, max_x = -1000000001, min_y = 1000000001, max_y = -1000000001;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		ll x, y;
		cin >> x >> y;
		
		if(min_x > x) min_x = x;
		if(max_x < x) max_x = x;
		if(min_y > y) min_y = y;
		if(max_y < y) max_y = y;
	}
	
	cout << (max_x - min_x + max_y - min_y) * 2;
	
	
	return 0;
}

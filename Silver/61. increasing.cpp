#include <iostream>
#include <map>
using namespace std;
typedef long long int ll;

ll arr[200001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll n, k, cnt = 0;
	cin >> n >> k;
	
	for(int i = 0; i < n; i++) {
		ll a;
		cin >> a;
		arr[i] = a;
	}
	
	if(k > 0) {
		for(int i = 1; i < n; i++) {
			if(arr[i - 1] >= arr[i]) {
				ll t = (arr[i - 1] - arr[i]) / k + 1;
				arr[i] += k * t;
				cnt += t;
			}
		}
	}
	else {
		k = -k;
		for(int i = n - 1; i >= 1; i--) {
			if(arr[i - 1] >= arr[i]) {
				ll t = (arr[i - 1] - arr[i]) / k + 1;
				arr[i - 1] -= k * t;
				cnt += t;
			}
		}
	}
	
	cout << cnt;
	
	return 0;
}

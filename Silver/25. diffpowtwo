#include <iostream>
#include <cmath>
using namespace std;

int arr[200001];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	if(n == 1) {
		cout << -1;
		return 0;
	}
	else if(n%2 == 0) {
		for(int i = 1; i <= n-1; i += 2) {
			arr[i]     = i + 1;
			arr[i + 1] = i;
		}
	}
	else {
		for(int i = 1; i <= n-4; i += 2) {
			arr[i]     = i + 1;
			arr[i + 1] = i;
		}
		
		arr[n]   = n - 1;
		arr[n-1] = n - 2;
		arr[n-2] = n;
	}
	
	for(int i = 1; i <=n ; i++) {
		cout << arr[i] << " ";
	}
	
	return 0;
}

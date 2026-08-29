#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, last = 0, is_same = 0, pair_cnt = 0, arr[200001];
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
		
		if(arr[i] == last) is_same++;
		else {
			is_same = 0;
			last = arr[i];
		}
		
		if(is_same == 1) {
			pair_cnt++;
		}
		
		if(is_same >= 2 || pair_cnt >= 2) {
			cout << 0;
			return 0;
		}
	}
	
	if(pair_cnt == 1) cout << 2;
	else cout << n+3;
	
	return 0;
} 

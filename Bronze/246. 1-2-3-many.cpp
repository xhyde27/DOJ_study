#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	while(n--) {
		int a, sum = 0;
		
		cin >> a;
		
		while(a--) {
			int num = 10;
			char b, c;
			
			cin >> b >> c;
			
			if(b != '!') {
				num = b - '0';
			}
			sum += num;
		}
		
		char b;
		
		cin >> b;
			
		if(b == '!') {
			sum += 10;
		}
		else sum += b - '0';
		
		if(sum > 9) cout << "!\n";
		else cout << sum << "\n";
	}
	
	return 0;
}

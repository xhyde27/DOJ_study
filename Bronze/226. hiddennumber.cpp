#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long int l, c, sum = 0;
	cin >> l;
	
	for(int i = l - 1; i >= 0; i--) {
		int a;
		cin >> a;
		a = !(a%2);
		sum += a * pow(2, i);
	}
	cin >> c;
	
	cout << (sum ^ c);
	
	return 0;
}

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	
    long long int n;
	cin >> n;
	
	if(n == 1 || (n & (n - 1)) == 0) cout << "NO";
	else cout << "YES";
	
	
	return 0;
}

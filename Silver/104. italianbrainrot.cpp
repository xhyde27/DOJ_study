#include <iostream>
#include <map>
using namespace std;

map<string, int> m;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
	
	int n, q;
	cin >> n >> q;
	
	for(int i = 0; i < n; i++) {
		string a;
		cin >> a;
		m[a] = i;
	}
	
	for(int i = 0; i < q; i++) {
		string a, b;
		cin >> a >> b;
		if(m[a] > m[b]) cout << a;
		else				cout << b;
		cout << "\n";
	}
	
	return 0;
}

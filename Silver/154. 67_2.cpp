#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, cnt6 = 0, cnt7 = 0;
	string s;
	
	cin >> n >> s;
	
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == '7') cnt7++;
		else			cnt6++;
	}
	
	if(cnt7 <= n/2) {
		for(int i = 0; i < cnt6; i++) {
			cout << "6";
		}
	}
	else {
		for(int i = 0; i < cnt7; i++) {
			cout << "7";
		}
	}
	
	
	return 0;
}

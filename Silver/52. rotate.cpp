#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, cntG = 0, cntH = 0, cntS = 0, cnt;
	string s;
	
	cin >> n >> s;
	for(int i = 0; i < n; i++) {
		
		if(s[i] == 'G') cntG++;
		else if(s[i] == 'H') cntH++;
		else if(s[i] == 'S') cntS++;
		
	}
	cnt = cntG < cntH ? cntG : cntH;
	cnt = cnt < cntS/2 ? cnt : cntS/2;
	
	cout << cnt;
	
	return 0;
}

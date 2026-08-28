#include <iostream>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long int n, flag = 0, countS = 0, countD = 0, tot = 0; 
	//# -> 0, - -> 1
	string s;
	cin >> n >> s;
	int l = s.size();
	
	for(int i = 0; i < l; i++) {
		if(s[i] == '#') {
			countS++;
			
			if(!flag) {
				tot += countD - 1;
				countD = 0; 
			}
			flag = 1;
		}
		else {
			countD++;
			
			if(flag) {
				tot += (countS + 1) * (countS + 1);
				countS = 0;
			}
			flag = 0;
		}
	}
	
	tot += countD - 1;
	
	cout << tot;
		
	return 0;
}

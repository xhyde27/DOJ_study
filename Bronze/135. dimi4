#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int h, m;
	cin >> h >> m;
	
	if((h <= 5 && h >= 0) || h == 23) cout << "No";
	else if(h == 6) {
		if(m >= 30 && m <= 59)		  cout << "Yes";
		else						  cout << "No";
	}
	else if(h == 9 || h == 10 || h == 11 || h == 12) {
		if(m >= 1 && m <= 49)   	  cout << "No";
		else						  cout << "Yes";
	}
	else if(h == 13 || h == 22) {
		if(m > 50)  				  cout << "No";
		else						  cout << "Yes";
	}
	else if(h == 14 || h == 15) {
		if(m >= 40 && m <= 50)  	  cout << "Yes";
		else						  cout << "No";
	}
	else if(h == 16) {
		if(m >= 40)					  cout << "Yes";
		else						  cout << "No";
	}
	else							  cout << "Yes";
	
	return 0;
}

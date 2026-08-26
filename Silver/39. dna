#include <iostream>
#include <string>
#include <queue>
using namespace std;
queue<int> q;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	string l;
	cin >> l;
	
	int n = l.size();
	int Pcount = 0; int Ccount = 0, flag = 0;
	
	for(int i = 0; i < n - 2; i += 3) {
		string codon = "";
		codon += l[i];
		codon += l[i+1];
		codon += l[i+2];
		//string codon = l.substr(i, 3); 로 생략 가능 
		
		if(codon == "AUG" && flag == 0) {
			flag = 1;
			Pcount++;
		}
		else if(flag == 1) {
			
			if(codon == "UAG" || codon == "UAA" || codon == "UGA") {
				Ccount += 1;
				q.push(Ccount);
				Ccount = 0;
				flag = 0;
			}
			else {
				Ccount += 1;
			}
			
		}
	}
	
	cout << Pcount << "\n";
	
	if(Pcount) {
		
		while(!q.empty()) {
			cout << q.front() << " ";
			q.pop();
		}
		
	}
	
	return 0;
}

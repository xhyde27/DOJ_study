//도저히 모르겠어서 해설참조함 
#include <iostream>
#include <set>

using namespace std;
int isFriend[200001], inRoom[200001];
set<int> candidates;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n, q, cnt = 0;
	cin >> n >> q;
	
	while(q--) {
		int a, b;
		cin >> a;
		
		if(a == 1) {
			cin >> b;
			
			if(isFriend[b] == 0) {
				inRoom[b] = 1;
				candidates.insert(b);
			}
		}
		else if(a == 2) {
			cin >> b;
			
			if(isFriend[b] == 0) {
				inRoom[b] = 0;
			}
		}
		else if(a == 3) {
			for(auto i = candidates.begin(); i != candidates.end(); i++) {
				int k = *i;
				
				if(!isFriend[k] && inRoom[k]) {
					isFriend[k] = 1;
					cnt++;
				}
			}
			candidates.clear();
		}
		else {
			cout << cnt << "\n";
		}
		
	}
	
	
	return 0;
}

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<bool> arr(1000001, true);
stack<int> s;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
		
	arr[1] = false;
	arr[2] = true;
	
	
	//소수 
	for(int i = 2; i * i <= n; i++) {
		if(arr[i]) {
			s.push(i);
			
			for(int j = i * i; j <= n; j += i) {
				arr[j] = false;
			}
		}
	}
	
    for(int i = 1; i <= q; i++) {
        int a;
        cin >> a;
        
        if(n == 1) cout << "0" << "\n"; 
        else if(a == 1) cout << "1" << "\n";
        else if(arr[a]) {
        	if(2 * a <= n) cout << "2" << "\n";
        	else		   cout << "1" << "\n";
		}
        else       cout << "2" << "\n";
    }

    return 0;
}

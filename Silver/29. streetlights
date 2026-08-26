#include <iostream>
#include <queue>
using namespace std;
priority_queue<int> pq;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long int n, d;
	cin >> n >> d;

	long long int sum = 2 * d;
	
	for(int i = 0; i < n; i++) {
		int a;
		cin >> a;
		pq.push(a);
	}
	
	int b, a;
	b = pq.top();
	pq.pop();
	
	while(!pq.empty()) {
		a = pq.top();
		pq.pop();
		
		int l = b - a;
		
		if(l > 2 * d) l = 2 * d;
		sum += l;
		
		b = a;
	}
	
	cout << sum;
	return 0;
}

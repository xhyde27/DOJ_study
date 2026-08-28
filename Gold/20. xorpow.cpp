#include <stdio.h>
int main() {
	int t, p, q, r;
	scanf("%d", &t);
	
	for(int i = 0; i < t; i++) {
		scanf("%d %d %d", &p, &q, &r);
		q = q < r ? q : r;
		printf("%d\n", (p + q - 1) % 1000000007);
	}
	
	return 0;
}

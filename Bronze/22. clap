#include <stdio.h>
int main(){
	
	int n, a, arr[110], flag = 0;
	scanf("%d", &n);
	
	
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	a = arr[1] - arr[0];
	
	for(int i = 1; i < n; i++) {
		if(arr[i] - arr[i - 1] != a) {
			flag = 1;
			break;
		}
	}
	
	if(flag) printf("No");
	else	 printf("Yes"); 
	
	return 0;
}

#include <stdio.h>
main() {
	int a=0,b=0,n,i;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++) {
		scanf("%d %d ", &a,&b);
		printf("%d\n", a+b);
	}
	return 0;
} 

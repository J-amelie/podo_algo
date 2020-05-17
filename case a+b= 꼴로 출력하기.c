#include <stdio.h>
main() {
	int a,i,b,n;
	scanf("%d", &n);
	
	for(i=0; i<n; i++) {
		scanf("%d %d", &a,&b);
		printf("Case #%d: &d + %d = %d\n", i,a,b,a+b);
	} 
}

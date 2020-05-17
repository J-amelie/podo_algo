#include <stdio.h>
main() {
	int a,b,i,n;
	
	scanf("%d\n", &n);
	
	for(i=0; i<=n; i++) {
	scanf("%d,%d", &a,&b);
	printf("%d\n", a+b);
} return 0;
}

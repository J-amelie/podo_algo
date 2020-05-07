#include <stdio.h>
main() {
	int a,b,c,d,e,f,g,h,i;
	scanf("%d%d%d\n",a,&b,&c);
	scanf("%d%d%d",&d,&e,&f);
	g=(a*f*100)+(b*f*10)+(c*f);
	h=(a*e*100)+(b*e*10)+(c*e);
	i=(a*d*100)+(b*e*10)+(c*f);
	printf("%d\n", g);
	printf("%d\n", h);
	printf("%d\n", i);
	printf("%d", g+h+i);
} 

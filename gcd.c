#include <stdio.h>

int gcd(int m, int n){
	if(n==0)
		return(m);
	return(gcd(n, m%n));
}

main(){
	int n=1, m;

	while(n>0){
		printf("Enter n and m. n=0 will close it. \n");
		scanf("%d%d", &n, &m);
		printf("The gcd is %d.\n", gcd(m, n));
	}

}

#include <stdio.h>

long fib(int n){
	if(n==0 || n ==1)
		return(n);
	return(fib(n-2)+fib(n-1));
}

main(){
	int n=1;

	while(n>0){
		printf("Enter n for the n-th Fibonacci number. 0 to exit \n");
		scanf("%d", &n);
		printf("The Finobacci number is %d.\n", fib(n));
	}

}

#include <stdio.h>

main() {
	int n;
	printf("Input natural number: ");
	scanf("%d", &n);

	while(n > 1){
		if((n%2) == 1)
			n = n*3 + 1;
		else
			n = n/2;
		printf("%d \n", n);
	}
	scanf("%d", &n);
}

void binary (int n) {
	int p;
	for (p = 1; 2*p <= n; p = 2*p);
	while (p > 0){
		if(p <= n){
			printf("1");
			n = n-p;
		}
		else printf("0");
		p = p/2;
	}
	printf("\n");
}

void main (void){
	int n;
	while(n!=0){
		printf("Enter a natural number: ");
		scanf("%d", &n);
		binary(n);
	}	
}

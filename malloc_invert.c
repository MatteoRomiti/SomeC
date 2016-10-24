#include <stdio.h>

void main(void) {
	float *v;
	int N, i;
	N = 1;

	while(N>0){
		printf("How many elements? ");
		scanf("%d", &N);

		v = malloc(N*sizeof(float));
		if(v==NULL) N = 0;
		else{
			printf("Enter %d elements \n", N);
			for(i=0; i<N; i++){
				printf("Element #%d:", i+1);
				scanf("%f", &v[i]);
			}
			printf("\nElements inverted\n");
			for(i=N-1; i>=0; i--)
				printf("Element #%d: %f\n", i+1, v[i]);
			free(v);
		}
	}
}
	

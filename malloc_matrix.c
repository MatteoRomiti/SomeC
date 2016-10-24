#include <stdio.h>

void main(void) {
	float **v;
	int nr, nc, i, j;
	nr = 1;

	while(nr>0){
		printf("Dimensions (raws colums): ");
		scanf("%d%d", &nr, &nc);

		v = malloc(nr*sizeof(float *));
		if(v==NULL) nr = 0;
		else {
			for(i=0; i<nr; i++){
				printf("Enter raw #%d: ", i+1);
				v[i] = malloc(nc*sizeof(float));
				if(v[i]==NULL) nc = 0;
				else{
					for(j=0; j<nc; j++)
						scanf("%f", &(v[i][j]));

				}
			}
			for(i=0; i<nr; i++){
				for(j=0; j<nc; j++){
					printf("%f, ", v[i][j]);
				}
				printf("\n");
			}
		}
	}
}
	

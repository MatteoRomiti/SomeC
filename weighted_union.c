#include <stdio.h>
#define N 100

main() {
	int i, j, p, q, id[N], sz[N]; //initialize
	for(i=0; i<N; i++){
		id[i] = i;
		sz[i] = 1;
	}
	printf("Input pair p q: ");
	while(scanf("%d %d", &p, &q)==2){
		for(i=p; i!=id[i]; i=id[i]); //climb the tree
		for(j=q; j!=id[j]; j=id[j]);
		if(i==j)
			printf("Nodes already connected\n");
		else{
			printf("Nodes not connected yet.\n");
			if(sz[i]<sz[j]){
				id[i] = j;
				sz[j] += sz[i];
			}
			else{
				id[j] = i;
				sz[i] += sz[j];			
			}
		}
		printf("Input pair p q: ");
	}
}

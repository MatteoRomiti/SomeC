#include <stdio.h>
#define N 100

main() {
	int i, j, p, q, id[N]; //initialize
	for(i=0; i<N; i++)
		id[i] = i;
	printf("Input pair p q: ");
	while(scanf("%d %d", &p, &q)==2){
		for(i=p; i!=id[i]; i=id[i]); //climb the tree
		for(j=q; j!=id[j]; j=id[j]);
		if(i==j)
			printf("Nodes already connected\n");
		else{
			id[i]=j;
			printf("Nodes not connected yet.\n");
		}
		printf("Input pair p q: ");
	}
}

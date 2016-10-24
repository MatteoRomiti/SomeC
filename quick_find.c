#include <stdio.h>
#define N 100

main() {
	int i, t, p, q, id[N];
	for(i=0; i<N; i++)
		id[i] = i;
	printf("Input pair p q: ");
	while(scanf("%d %d", &p, &q)==2){
		if(id[p]==id[q])
			printf("Nodes already connected\n");
		else{
			for(t=id[p], i=0; i<N; i++)
				if(id[i]==t)
					id[i] = id[q]; //q is the dominant one
			printf("Nodes not connected yet.\n");
		}
		printf("Input pair p q: ");
	}
}

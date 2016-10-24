#include <stdio.h>

void insertionSort(int A[], int l, int r){
	int i, j, x;
	for(i=l+1; i<=r; i++){
		x = A[i];
		j = i-1;
		while(j>=l && x<A[j]){
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = x;
	}
}

int binSearch(int v[], int a, int b, int k){
	//v is an ordered vector {0, 2, 5, 6, 8}
	int c;

	while(a<=b){
		c = a+(b-a)/2;
		if(v[c]==k)
			return c;
		if(v[c]<k)
			a = c+1;
		else b = c-1;
	}
	return(-1);
}

void main(void){
	int i, l, r, k, p;
	int A[]= {3, 6, 87, 4, 67, 54, 23, 54, 12, 98, 6, 8};
	l = 0;
	r = sizeof(A)/sizeof(A[0]);
	insertionSort(A, l, r);
	for(i=0; i<(sizeof(A)/sizeof(A[0])); i++){
		printf("%d ", A[i]);
	}
	
	k = 0;
	while(k>=0){
		printf("\nChoose a number and I'll tell you its position.\n");
		scanf("%d", &k);
		p = binSearch(A, l, r, k);
		printf("It is in position number %d", p+1);
	}
}

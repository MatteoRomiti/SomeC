#include <stdio.h>

int binSearch(int v[], int a, int b, int k){
	//v is an ordered vector {0, 2, 5, 6, 8}
	int c;

	while(a<=b){
		c = a+(b-a)/2;
		if(v[c]==k)
			return(c);
		if(v[c]<k)
			a = c+1;
		else b = c-1;
	}
	return(-1);

}

int main(void){
	int a = 0;
	int b = 6;
	int k = 8;
	int A[] = {2, 3, 4, 5, 6, 7, 8};
	int p = binSearch(A, a, b, k);
	printf("position number %d", p+1);
	getchar();
}

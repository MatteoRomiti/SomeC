#include <stdio.h>
#include <math.h>

int main(void) {
	float a, b, c, step, x, x0, xn, y, ymin, ymax;
	int i, j, n;
	printf("Coefficients a b c: ");
	scanf("%f%f%f", &a, &b, &c);
	printf("number of intervals: ");
	scanf("%d", &n);
	printf("Abscissae interval: ");
	scanf("%f%f", &x0, &xn);
	printf("Ordinates interval: ");
	scanf("%f%f", &ymin, &ymax);

	step = (xn-x0)/n;
	for(i=0; i<n; i++){
		x = x0 + step*i;
		y = a*x*x + b*x + c;
		if(y<ymin || y>ymax) continue;
		for(j=round(y-ymin); j>0; j--)
			printf(" ");
		printf("*\n");
	}
	scanf("%d", &n);
}

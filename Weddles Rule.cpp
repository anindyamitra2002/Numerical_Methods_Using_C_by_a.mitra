#include<stdio.h>
#include<math.h>
int main(){
	int i, j, n, p;
	float x[25], total, sum_odd, sum_even, h, y[25], a, b;
	printf("Enter the total number of interval: ");
	scanf("%d",&p);
	printf("Enter the min value of x: \n");
	scanf("%f",&a);
	printf("Enter the max value of x: \n");
	scanf("%f",&b);
	n = p + 1;
	x[0] = a;
	h = (b-a)/p;
	for(i=1; i<n; i++){
		x[i] = x[0] + (i*h);
	}
	
		for(i=0; i<n; i++){
		y[i] = log10(x[i]);
		}

		total = (3*(x[1] - x[0])/10) * (y[0] + 5*y[1] + y[2] + 6*y[3] + y[4] + 5*y[5] + y[6]);
		for(i=0; i<n; i++){
		printf("%0.3f\t",x[i]);
		printf("%0.3f\t",y[i]);
		printf("\n");
	}
		printf("\nTotal = %0.3f", total);
}

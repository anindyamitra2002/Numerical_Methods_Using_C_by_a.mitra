#include<stdio.h>
#include<math.h>
int main(){
	int i, j, n, p;
	float x[25], total, sum, h, y[25], a, b;
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
		y[i] = pow(2.71828,x[i]);
		}
		sum=0;
		for(i=1; i<n-1; i++){
		sum = sum + y[i];
	}
		total = ((x[1] - x[0])/2) * ((y[0] + y[n-1]) + 2*(sum));
		for(i=0; i<n; i++){
		printf("%0.3f\t",x[i]);
		printf("%0.3f\t",y[i]);
		printf("\n");
	}
		printf("Total = %0.3f", total);
}

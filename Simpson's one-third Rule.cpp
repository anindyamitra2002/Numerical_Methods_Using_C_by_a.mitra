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
		y[i] = log(x[i]);
		}
		sum_odd=0;
		for(i=0; i<n/2; i++){
		sum_odd = sum_odd + y[2*i+1];
		}
		sum_even = 0;
		for(i=1; i<n/2; i++){
		sum_even = sum_even + y[2*i];
		}

		total = ((x[1] - x[0])/3) * ((y[0] + y[n-1]) + 2*(sum_even) + 4*(sum_odd));
		for(i=0; i<n; i++){
		printf("%0.3f\t",x[i]);
		printf("%0.3f\t",y[i]);
		printf("\n");
	}
		printf("Total = %0.3f", total);
}

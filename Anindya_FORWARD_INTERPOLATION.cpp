#include<stdio.h>
int main(){
	int i, j, n, p;
	float x[25], u, q, a, sum, h, y[25][25];
	
	printf("enter the total of elements given: ");
	scanf("%d",&n);
	
	printf("enter the value of x: \n");
	for(i=0; i<n; i++){
		scanf("%f",&x[i]);
	}
		printf("Enter the corresponding value of y: \n");
		for(i=0; i<n; i++){
			scanf("%f",&y[i][0]);
		}
		
		printf("Enter the value of x whose y is to be found: ");
		scanf("%f",&a);
		for(j=1; j<n; j++){
			for(i=0; i<n-j; i++){
				y[i][j] = y[i+1][j-1] - y[i][j-1];
			}
		}
		printf("\nFORWARD DIFFERENCE TABLE\n\n");
 for(i = 0; i < n; i++)
 {
  printf("%0.2f", x[i]);
  for(j = 0; j < n-i ; j++)
  {
   printf("\t%0.2f", y[i][j]);
  }
  printf("\n");
 }
		h = x[1] - x[0];
		u = (a - x[0])/h;
		sum = y[0][0];
		p = q = 1;
		for(j=1; j<n; j++){
			p = p*j;
			q = q*(u + 1 - j);
			sum = sum + q* y[0][j]/p;
		}
		printf("x = %f, y = %f",a, sum);		
}

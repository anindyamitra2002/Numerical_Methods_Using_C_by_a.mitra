#include<stdio.h>
int main(){
	int i, j, n, p;
	float x[25],a , sum, k=1, y[25][25];
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
				y[i][j] = (y[i+1][j-1] - y[i][j-1]) / (x[i+j] - x[i]);
			
			}
		}
		printf("\nDIVIDED DIFFERENCE TABLE\n\n");
 for(i = 0; i < n; i++)
 {
  printf("%0.2f", x[i]);
  for(j = 0; j < n-i; j++)
  {
   printf("\t%0.4f", y[i][j]);
  }
  printf("\n");
 }
	sum = y[0][0];
	for(j=1; j<n; j++){
	for(i=0; i<j; i++){
	k = k * (a - x[i]);
}
	sum = sum + (k * y[0][j]);
}
		
		printf("x = %f, y = %f",a, sum);		
}

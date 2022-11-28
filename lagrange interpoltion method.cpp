#include<stdio.h>
int main(){
	int i, j, n, p;
	float x[25], q, a, sum=0, y[25];
	printf("enter the total of elements given: ");
	scanf("%d",&n);
	printf("enter the value of x: \n");
	for(i=0; i<n; i++){
		scanf("%f",&x[i]);
	}
		printf("Enter the corresponding value of y: \n");
		for(i=0; i<n; i++){
			scanf("%f",&y[i]);
		}
	printf("Enter the value of x whose y is to be found: ");
	scanf("%f",&a);
	for(i=0; i<n; i++){

	p = q = 1;
	for(j=0; j<n; j++){
	if(i != j){
	p = p * (a - x[j]);
	q = q * (x[i] - x[j]);
}
}
	sum = sum + ((p/q)*y[i]);
}
printf("x = %f; y = %f",a,sum);
}

#include<stdio.h>
int main(){
	int i, n;
	float x1[10], x2[10], x3[10], a[4], b[4], c[4];
	printf("Enter the value of a: \n");
	for(i=0; i<4; i++){
		scanf("%f",&a[i]);
	}
	
	printf("Enter the value of b: \n");
	for(i=0; i<4; i++){
		scanf("%f",&b[i]);
	}
	
	printf("Enter the value of c: \n");
	for(i=0; i<4; i++){
		scanf("%f",&c[i]);
	}
	x1[0]=0;
	x2[0]=0;
	x3[0]=0;

	i=0;
	do{
	x1[i+1] = (1/a[0])*(a[3] - (a[1]*x2[i]) - (a[2]*x3[i]));
	x2[i+1] = (1/b[1])*(b[3] - (b[0]*x1[i+1]) - (b[2]*x3[i]));
	x3[i+1] = (1/c[2])*(c[3] - (c[0]*x1[i+1]) - (c[1]*x2[i+1]));
	printf("%d th order Iteration:\n", i);
	printf("x1 = %f\n",x1[i+1]);
	printf("x2 = %f\n",x2[i+1]);
	printf("x3 = %f\n",x3[i+1]);
	printf("\n");
	i++;
	}while((x1[i+1]-x1[i])+(x2[i+1]-x2[i])+(x3[i+1]-x3[i]) < 0.03);

}
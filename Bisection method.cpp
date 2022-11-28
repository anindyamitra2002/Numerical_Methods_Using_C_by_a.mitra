#include<stdio.h>
#include<math.h>
int main(){
	float x[100], a, b, r, root;
	int i;
	printf("Enter the value of a: ");
	scanf("%f",&a);
	printf("Enter the value of b: ");
	scanf("%f",&b);
	
	i=0;
	do{
		printf("Iteration %d: \n",i);
		x[i] = (a+b)/2;
		printf("Mean: %f\n",x[i]);
		r = pow(x[i],3) - (3*x[i]) + 1;
		printf("value of f(x) = %f\n",r);
		
		if(r<0){
			b = x[i];
		}
		else{
			a = x[i];
		}
		i++;
		printf("a = %f\t",a);
		printf("b = %f\n",b);
		root = (a+b)/2;
		printf("\n\n");
	} while(a-b > 0.001);
	
	printf("The Root is: %f",root);
}
#include<stdio.h>
#include<stdlib.h>
float eqn(float x){
	float val = (x*x*x) - (7*x*x) + (8*x) - 3;
	return val;
}

float dev_eqn(float x){
	float val = (3*x*x) - (14*x) + 8;
	return val;
}


int main(){
	int i, j;
	float x[10], fx, f_x, r1, r2, b, root;
	i=0;
	j=i+1;
	do{
		r1 = eqn(i);
		r2 = eqn(j);
		i++;
		j++;
	}while((r1 >= 0) || (r2 <= 0));
		x[0] = (float)(i-1);
		b = (float)(j-1);
		printf("The Root is in the interval : [%f, %f]\n\n",x[0],b);
		
	i = 1;
	do{
		fx = eqn(x[i-1]);
		f_x = dev_eqn(x[i-1]);
		x[i] = x[i-1] - (fx / f_x);
		root = x[i];
		i++;
	}while(abs(x[i-1]-x[i]) > 0.0001);
	printf("Root is the given equation is: %f",root);
}
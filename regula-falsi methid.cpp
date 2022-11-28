#include<stdio.h>
#include<stdlib.h>
float eqn(float x){
	float val;
	val = (x*x*x) - (5*x) - 7;
	return val;
}

float next(float a, float b){
	float f_a, f_b, result;
	f_a = eqn(a);
	f_b = eqn(b);
	result = ((a*f_b)-(b*f_a))/(f_b - f_a);
	return result;
}


int main(){
	printf("\n####################  Regula-Falsi Method -by Anindya  ########################\n\n\n");
	int i, j;
	float a, b, x1, x2, r1, r2;
	i=0;
	j=i+1;
	do{
		r1 = eqn(i);
		r2 = eqn(j);
		i++;
		j++;
	}while((r1 >= 0) || (r2 <= 0));
		a = (float)(i-1);
		b = (float)(j-1);
		printf("The Root is in the interval : [%f, %f]\n\n",a,b);
		i=0;
	do{
		printf("Iteration: %d\n",i);
		x1 = next(a,b);
		if(eqn(x1) < 0){
			a = x1;
		}
		else if(eqn(x1) >0){
			b = x1;
		}
		else{
			break;
		}
		printf("The Root is in the interval : [%f, %f]\n\n",a,b);
		printf("Iteration: %d\n",i+1);
		
		x2 = next(a,b);
		if(eqn(x2) < 0){
			a = x2;
		}
		else if(eqn(x2) >0){
			b = x2;
		}
		else{
			break;
		}
		printf("The Root is in the interval : [%f, %f]\n\n",a,b);
		i+=2;
	}
	while(abs(x1 - x2) > 0.0001);
	printf("Root of the Given equation is: %0.4f",x2);
	
}
#include<stdio.h>
int main(){
	int arr[4][4], i, j, k;
	
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=1; i<3; i++){
		for(j=0; j<4; j++){
			if(arr[i][0]!=0){
				arr[i][j] = arr[0][j]*arr[i][j] - arr[i][j]*arr[0][j];
				arr[i+1][j] = arr[i+1][j]*arr[0][j] - arr[0][j]*arr[i+1][j];
			}
			else{
				arr[i][j] = arr[1][j]*arr[i][j] - arr[i][j]*arr[1][j];
			}
		}
	}
	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			printf("%d    ",arr[i][j]);
		}
		printf("\n");
	}
}

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int min(int a,int b){
	return(a>b)?a:b;
}
int minimum_path(int (*array)[3],int (*arraysorted)[3]){
	int a=0;
	int b=0;
	for(int i=0;i<3;i++){
		arraysorted[i][0]=array[i-1][0]+array[i][0];
	}
	for(int j=0;j<3;j++){
		arraysorted[0][j]=array[0][j-1]+array[0][j];
	}
	for(int i=1;i<3;i++)
	for(int j=1;j<3;j++)
	arraysorted[i][j]=array[i][j]+min(arraysorted[i-1][j],arraysorted[i][j-1]);
	
	return arraysorted[2][2];   
}
int main(){


	int array[3][3]={{1,2,3},{3,3,1},{2,2,1}};
	int arraysorted[3][3];
	int result;

	result=minimum_path(array,arraysorted);
	printf("%d",result);
	return 0;
}

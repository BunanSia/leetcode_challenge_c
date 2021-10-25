#include<stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int count(int array[],int arraysize){
	qsort(array,arraysize,sizeof(int), cmpfunc);
	for(int i=0;i<arraysize;i++){
		printf("%d",array[i]);
	}
	printf("\n");
	int count=0;
	int right=0;
	int left=0;
	for(int i=1;i<arraysize;i++){
		if(array[i]-array[i-1]==1){
			right++;
			count+=(right-left);
			left=right;
		}
		else if(array[i]==array[i-1]){
			right++;
		}
		else{
			left=right;
		}
	}
	return count;
}
int main(){
	int array[100];
	int arraysize=0;
	for(int i=0;i<100;i++){
		scanf("%d",&array[i]);
		if(array[i]==-1)
		break;
		arraysize++;
	}
	int n;
	n=count(array,arraysize);
	printf("%d",n);
	return 0;

} 

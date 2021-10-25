#include<stdio.h>
#include<stdlib.h>

void product(int* array,int* newarray,int size){
	int sum=1;
	for(int i=0;i<size;i++){
		sum+=sum*array[i];
	}
	for(int i=0;i<5;i++){
		newarray[i]=sum/array[i];
	}
	return;
}

int main(){
	int array[7]={1,2,3,4,5,6,7};
    int newarray[7];
    product(array,newarray,6);
    for(int i=0;i<7;i++)
	printf("%d",newarray[i]);
    return 0;
}

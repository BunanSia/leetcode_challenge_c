#include<stdio.h>
#include<string.h>
int maxarray(int array[],int size){
	int i,num,j,sum,n;
	n=array[0];
	
	for(i=0;i<size;i++){
				sum=0;
		for(j=i;j<size;j++){
				sum+=array[j];
			if(n<sum)
		    n=sum;
		}

	}
	return n;
}
/*
void maxarray(int* array,int size){
	int i,num,j,sum;
	sum=0;
	n=sum;
	
	for(i=0;i<size;i++){
        sum+=array[i];
        if(sum<array[i])
        sum=array[i];
		if(n<sum)
		n=sum;
	}
	return n;
}
*/

int main(){
	int size=0;
	int n;
	int array[10];
	        for (int j = 0; j < 10; ++j){
	        	printf("Put your member\n");
							scanf("%d", &array[j]);
							size++;
							printf("\nContinue?If yes press\"Y\"\n");
							char con;
							scanf(" %c",&con);
							if(con!='Y')
								break;					
			}

	
	n=maxarray(array,size);
	printf("%d\n",n);
	return 0;
	
} 

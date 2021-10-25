#include<stdio.h>
#include<stdlib.h>

markcurrent_island(int**array,int i,int j){
			array[i][j]=2;
			markcurrent_island(x,y+1);
			markcurrent_island(x,y-1);
			markcurrent_island(x+1,y);
			markcurrent_island(x-1,y); 

}

int main(){
	if(array[i][j]==1){
		markcurrent_island(array,i,j)
		num_of_island+=1
	}
	else{
		
	}
	printf("%d",num_of_island);
	return 0;
}


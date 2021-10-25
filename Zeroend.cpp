#include<stdio.h>
#include<string.h>

void zero(int array[],int newthing[],int size){
	int newsize=0;
	for(int i=0;i<size;i++){
		if(array[i]!=0){
			newthing[newsize++]=array[i];
		}
	}
	for(int i=newsize;i<size;i++){
		newthing[i]=0;
	}
	for(int i=0;i<size;i++)
	printf("%d",newthing[i]);
	
}
int main(){
	int array[100];
	int size=0;
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
			int newthing[size];
			zero(array,newthing,size);
			return 0;
}



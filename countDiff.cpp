#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void countDiffe(int* array,int* countDiff){
	int j=0;
	int i=0;
	while(array[i++]!='\0'){
			if(i==0){
				if(array[i]==0)
					countDiff[i]=-1;
				else
				    countDiff[i]=1;
			}
			else{
					if(array[i]==1)
					countDiff[i]=countDiff[i-1]++;
					else if(array[i]==0)
					countDiff[i]=countDiff[i-1]--;
			}

	}
}

int findmaxJ(int target,int* array,int sizeh,int* countDiff){
			int maxJ;
			for(int j=0;j<sizeh;j++){
			if(target==countDiff[j]){
                maxJ=j;
				}
			}
			return maxJ;
}

int main(){
	int sizeh=5;
	int array[sizeh]={0,1,0,1,1};
	int maxlength=0;
	int countDiff[sizeh];
    countDiffe(array,countDiff);
	int length=0;
	int maxJ;
	for(int i=0;i<sizeh;i++){
		int target=countDiff[i];
            maxJ=findmaxJ(target,array,sizeh,countDiff);
			length=maxJ-i+1;
			if(maxlength<length)
			maxlength=length;	
		}
		    printf("%d",maxlength);
    return 0;
	}

 

#include<stdio.h>

bool backspace(char arraya[],int arraysizea,char arrayb[],int arraysizeb){
	char one[10];
	char two[10];
	int onesize=0;
	int twosize=0;
	for(int i=0;i<arraysizea;i++){
		if(arraya[i]>='a'&&arraya[i]<='z'){
			one[onesize++]=arraya[i];
		}
		else if(arraya[i]!='\0'){
			if(onesize>0)
			onesize-=1;
			else
			continue;
		}
		else
			break;
	}
	for(int i=0;i<arraysizeb;i++){
		if(arrayb[i]>='a'&&arrayb[i]<='z'){
			two[onesize++]=arrayb[i];
		}
		else if(arrayb[i]!='\0'){
			if(twosize>0)
			twosize-=1;
			else
			continue;
		}
		else
			break;
	}
	if(onesize!=twosize)
	return false;
	for(int i=0;i<onesize;i++){
		if(one[i]!=two[i])
		return false;
	}
	return true;
}

int main(){
    char arraya[10];
    char arrayb[10];
    int arraysizea=0;
    int arraysizeb=0;
    printf("Put arraya\n");
    for(int i=0;i<10;i++){
    	scanf("%c",&arraya[i]);
    	if(arraya[i]==' ')
    	break;
    	arraysizea++;
	}
	printf("Put arrayb\n");
    for(int i=0;i<10;i++){
    	scanf("%c",&arrayb[i]);
    	if(arrayb[i]==' ')
    	break;
    	arraysizeb++;
	}
	bool n=backspace(arraya,arraysizea,arrayb,arraysizeb);
	if(n==true)
		printf("Nng e kang khoan\n");
		else
		printf("Nng e bo kang \n");
	
	return 0;
}

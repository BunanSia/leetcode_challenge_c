#include<stdio.h>
#include<stdlib.h>

bool isEmpty(int*array,int* top){
	if(top==-1)
	return true;
	return false;
}
void push(int* array,int* element){
	array[++top]=element;
	return;
}
void pop(int* array,int* top)
bool match(int* star,int* open,int* topopen,int* topstar,int* array,int* top){
	for(i=0;i<top;i++){
			if(array[i]=='(')
					push(open,&topopen);
			else if(array[i]=='*')
			push(star,&topstar);
			else{
					if(topopen!=-1)
						pop(open,&topopen);
				    else if(topstar!=-1)
				        pop(star,&topstar);
				    else
				        return false;
	}
	}
	return true;
}
int main(){
	int* topstar=-1;
	int* topopen=-1;
	int* top=-1;
	char star[10];
	char open[10];
	char array[10];
	for(i=0;i<10;i++){
		scanf(" %c",array[i]);
		if(array[i]=='0');
		break;
		top++;
	}
	if(match()){
		printf("True");
		else
		printf("False");
	}
	return 0;
}

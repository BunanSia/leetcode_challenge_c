#include<stdio.h>
#include<string.h>

/*int next_line(int n){
	int next=0;
	while(n>0){
		next+=(n%10)*(n%10);
		n=n/10;
	} 
	return next;
}
bool contain(int* history,int size,int n){
	for(int i=0;i<size;i++){
		if(history[i]==n)
			return true;
		
	}
	return false;
}

int ishappy(int n){
	int size=0;
	9999999999
	int history[810];
	while(!contain(history,size,n)){
		history[size]=n;
		size++;
		n=next_line(n);
	}
	if(n==1)
		printf("This is a happy number\n");
		else
		printf("This is not a happy number\n");
	return 1;
	
}*/ 
int next_line(int n){
	int next=0;
	while(n>0){
		next+=(n%10)*(n%10);
		n=n/10;
	} 
	return next;
}

int ishappy(int n){
    int turtle;
    int rabbit;
    turtle=n;
    rabbit=n;
	do{
        rabbit=next_line(next_line(turtle));
        turtle=next_line(rabbit);
        
	}while(turtle!=rabbit);
	if(turtle==1)
		printf("This is a happy number\n");
		else
		printf("This is not a happy number\n");
	return 1;
	
}

int main(){
	printf("Please put a number\n");
	int n;
	scanf("%d",&n);
	ishappy(n);
	return 0;
}

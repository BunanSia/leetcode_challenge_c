#include<stlib.h>
#include<stdio.h>
int array[5]={1,8,3,6,4};
int* top=5;

int push(int c){
	if(top>=5)
	printf("Stack is full\n");
	array[++top]=a;
	return;
}
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int smash(int* array){
	while(top!=0){
			qsort(array, 5, sizeof(int), cmpfunc);
			for(int i=0;i<5;i++)
			printf("%d\t",array[i]);
			int a=pop(array,&top);
			int b=pop(array,&top);
			int c=a-b;
			push(c);
	}

	
}
int pop(int* array,int* top){
	if(top<=-1)
	printf("Stack is empty\n");
	int i=array[top--];
	return i;
}

int main(){
	
	int i=smash(array);
	printf("Remaining is %d",i);
	return 0;
}

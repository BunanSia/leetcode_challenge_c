#include<stdio.h>

int max_profit(int price[],int pricesize){
	int max=0;
	for(int i=1;i<pricesize;i++){
		if(price[i]>price[i-1]){
			max+=price[i]-price[i-1];
		}
	}
	return max;
}
int main(){
	int price[100];
	int size;
	for(int i=0;i<100;i++){
		scanf("%d",&price[i]);
		
		if(price[i]==-1){
		break;
		}
		size++;
	}
	printf("%d",max_profit(price,size));
    return 0;
}

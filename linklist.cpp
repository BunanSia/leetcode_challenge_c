#include<stdio.h>

/*struct ListNode* middleNode(struct ListNode* head){
	int length=0;
	for(struct ListNode* curr=head; curr!=NULL;curr=curr->next){
		length++;
	}
	struct ListNode* result=head;
	for(int i=0;i<length/2;i++){
	result=result->next; 
	
}
return result;
}*/
struct ListNode* middleNode(struct ListNode* head){
	struct ListNode* fast=head;
	struct ListNode* slow=head;
	while(fast!=NULL&&fast->next!=NULL){
		fast=fast->next->next;
		slow=slow->next;
	}

return slow;
}
int main(){
	
} 

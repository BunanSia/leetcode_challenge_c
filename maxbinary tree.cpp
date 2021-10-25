#include<stdio.h>
#include<math.h>
int maxDepth(struct ListNode* root){
	if(root==NULL)
	return 0;
	int leftMax=maxDepth(root->left);
	int rightMax=maxDepth(root->right);
    return (leftMax>rightMax)?leftMax+!:rightMax+1;
}
int diameterOfBinaryTree(struct TreeNode* root){
	int middle=maxDepth(root->right)+maxDepth(root->left);
	int left=dameterOfBinary(struct TreeNode* left);
	int max=middle;
	if(left>middle)
		max=left;
    else if(right>middle)
        max=right;
    return max;
	
}
int main(){
	diameterOfBinarTree(root);
	return 0;
} 

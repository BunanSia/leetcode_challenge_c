#include <stdio.h> 
#include <stdlib.h> 

typedef struct node
{
	int data;
	struct node *left;
	struct node *right;
} node;
 
node *create()
{
	node *p;
	int x;
	printf("Enter data(-1 for no data):");
	scanf("%d",&x);
	
	if(x==-1)
		return NULL;
	
	p=(node*)malloc(sizeof(node));
	p->data=x;
	
	printf("Enter left child of %d:\n",x);
	p->left=create();
 
	printf("Enter right child of %d:\n",x);
	p->right=create();
	
	return p;
}
 
void preorder(node *t)		//address of root node is passed in t
{
	if(t!=NULL)
	{
		printf("\n%d",t->data);		//visit the root
		preorder(t->left);		//preorder traversal on left subtree
		preorder(t->right);		//preorder traversal om right subtree
	}
}
int maxDepth(struct node *root){
	if(root==NULL){
		return 0;
	}
	int leftMax=maxDepth(root->left);
	int rightMax=maxDepth(root->right);
	if(leftMax>rightMax){
		return maxDepth(root->left)+1;
	}
	return maxDepth(root->right)+1;
}
int diameterBinaryTree(struct node* root){
	if(root==NULL){
		return 0;
	}
	int middle=maxDepth(root->left)+maxDepth(root->right);
	int max=middle;
	int leftMax=diameterBinaryTree(root->left);
	int rightMax=diameterBinaryTree(root->right);
	if(leftMax>middle){
		max=leftMax;}
		else if(rightMax>middle){
			max=rightMax;
		}
		return max;
	} 
int main()
{	
	node *root;
	root=create();
	printf("\nThe preorder traversal of tree is:\n");
	preorder(root);
	diameterBinaryTree(root);
	return 0;
}

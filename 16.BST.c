#include<stdio.h>


struct node{
	int data ;
	struct node* left;
	struct node* right;
	node(int val)
	{
		data=val;
		left=NULL;
		right=NULL;
	}
};	


void preorder(node* root)
{
	if(root==NULL)
	return ;
	
	
	printf("%d ",root->data);
	preorder(root->left);
	preorder(root->right);
	
}

void inorder(node* root)
{
	if(root==NULL)
	return ;
	
	preorder(root->left);
	printf("%d ",root->data);
	
	preorder(root->right);
	
}

void postorder(node* root)
{
	if(root==NULL)
	return ;
	
	preorder(root->left);
	preorder(root->right);
	printf("%d ",root->data);
	
	
}

int main()
{
	
	struct node* root =new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
	root->right->left=new node(6);
	root->right->right=new node(7);
	printf("preorder : ");preorder(root);
	printf("\n");
	printf("inorder : ");inorder(root);
	printf("\n");
	printf("postorder : ");postorder(root);
	return 0;
	
}

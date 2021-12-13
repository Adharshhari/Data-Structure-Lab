#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
int data;
struct node *left;
struct node *right;
};

struct node *create()
{
struct node *temp;
int item;
temp = malloc(sizeof(struct node));
printf("enter the data(0 if there is no data)");
scanf("%d",&item);
if(item==0)
{
return NULL;
}
temp->data=item;
printf("enter the left child of %d",item);
temp->left = create();
printf("enter the right child of %d",item);
temp->right = create();
return temp;
}


void preorder(struct node *t){
	if(t!=NULL){
	printf("%d",t->data);
	preorder(t->left);
	preorder(t->right);}}

void postorder(struct node *t){
	if(t!=NULL){
	postorder(t->left);
	postorder(t->right);
	printf("%d",t->data);}}

void inorder(struct node *t){
	if(t!=NULL){
	inorder(t->left);
	printf("%d",t->data);
	inorder(t->right);}}
	



void main(){

	struct node *root;
	root = (struct node *)malloc(sizeof(struct node));
	root = create();
	printf(" \n preoreder");
	preorder(root);
	printf("\n postoreder");
	postorder(root);
	printf("\n inoreder");
	inorder(root);
	
	
	
}

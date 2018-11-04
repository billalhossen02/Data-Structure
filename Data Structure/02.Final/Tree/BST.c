#include<stdio.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;


};

struct node* createNode(value){
struct node* newnode=malloc(sizeof(struct node));
newnode->data=value;
newnode->left=NULL;
newnode->right=NULL;
return newnode;
}

struct node* insert(struct node *root,int data){
if(root==NULL)
return createNode(data);
if(data<root->data)
    root->left=insert(root->left,data);
else if(data>root->data)

 root->right=insert(root->right,data);

return root;

}
void inorder(struct node* root){

if (root==NULL)
    return;
   inorder(root->left);
   printf("%d->",root->data);
   inorder(root->right);
   return root;
}

void preorder(struct node* root){

if (root==NULL)
    return;

   printf("%d->",root->data);
   preorder(root->left);
   preorder(root->right);
   return root;}
   void postorder(struct node* root){

if (root==NULL)
    return;


   postorder(root->left);
   postorder(root->right);
   printf("%d->",root->data);
   return root;
}
int main(){
    struct node *root = NULL;
    root = insert(root, 8);
    insert(root, 3);
    insert(root, 1);
    insert(root, 6);
    insert(root, 7);
    insert(root, 10);
    insert(root, 14);
    insert(root, 4);
    printf("inorder:");

    inorder(root);
    printf("preorder:");
    preorder(root);
    printf("postorder:");
    postorder(root);
}
















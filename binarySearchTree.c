#include<stdio.h>
typedef struct tree Tree;

struct tree {

int data ;
Tree *left;
Tree *right;
};


Tree *createtree(int data){
    Tree *newtree= (Tree *)malloc(sizeof(Tree));
    if(newtree==NULL){
    printf("Memory Allocation Failed la bla bla ");
    exit(1);
    }
    newtree->data=data;
    newtree->left=NULL;
    newtree->right=NULL;

    return newtree;

}
Tree *addchild(Tree *root,Tree *child){


    if(root==NULL){
        root=child;
        return root;

    }
   Tree *temproot=root,*prev;
    while(temproot!=NULL){

        if(temproot->data <= child->data){
        prev=temproot;
        temproot=temproot->right;
        if(temproot==NULL){
                prev->right=child;
                    return root;

        }
    }
        if(temproot->data > child->data){
                prev=temproot;
        temproot=temproot->left;
        if(temproot==NULL){
                prev->left=child;
                    return root;

        }
    }

    }

}








void preorder(Tree *parents){

       printf("%d\t",parents->data);

    if(parents->left !=NULL){
       preorder(parents->left);
    }
    if(parents->right !=NULL){
      preorder(parents->right);
    }
 return;


}

void postorder(Tree *parents){
    if(parents->left !=NULL){

       postorder(parents->left);
        //printf("%d\n",parents->data);
    }
    if(parents->right !=NULL){

      postorder(parents->right);
        //printf("%d\n",parents->data);
    }
        printf("%d\t",parents->data);
 return;



}

void inorder(Tree *parents){


    if(parents->left !=NULL){

       inorder(parents->left);
    }
    printf("%d\t",parents->data);
    if(parents->right !=NULL){

      inorder(parents->right);


    }
 return;



}
/*
        10
    5         15
3     7    13     20



*/


int main(){
    Tree *root=NULL;

    root=addchild(root,createtree(10));
    root=addchild(root,createtree(15));
    root=addchild(root,createtree(5));
    root=addchild(root,createtree(8));
    root=addchild(root,createtree(20));
    root=addchild(root,createtree(3));
    root=addchild(root,createtree(20));
    inorder(root);




    printf("\nPRE-Order:----\n");
    preorder(root);
    printf("\nPOST-Order:----\n");
    postorder(root);
    printf("\nIN-Order:----\n");
    inorder(root);


}

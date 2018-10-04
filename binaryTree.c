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
    printf("Memory Allocation Failed ");
    exit(1);
    }
    newtree->data=data;
    newtree->left=NULL;
    newtree->right=NULL;

    return newtree;

}
void addleftchild(Tree *parents,Tree *child){

    parents->left=child;


}

void addrightchild(Tree *parents,Tree *child){

    parents->right=child;


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
/*
        1
    2          3
  4     5   6     7
8
pre-order-1,2,4,5,3,6,7
post-order-4,5,2,6,7,3,1
in-order-4,2,5,1,6,3,7

*/
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
/*
        1
    2          3
  4     5   6     7
8
pre-order-1,2,4,5,3,6,7
post-order-4,5,2,6,7,3,1
in-order-4,2,5,1,6,3,7

*/
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
        1
    2         3
4     5    6     7

pre-order-1,2,4,5,3,6,7
post-order-4,5,2,6,7,3,1
in-order-4,2,5,1,6,3,7

*/


int main(){
    Tree *root;
    Tree *one=createtree(1);
    root=one;
    Tree *two=createtree(2);
    Tree *three=createtree(3);
    addleftchild(one,two);
    addrightchild(one,three);

    Tree *four=createtree(4);
    Tree *five=createtree(5);
    addleftchild(two,four);
    addrightchild(two,five);

    Tree *six=createtree(6);
    Tree *seven=createtree(7);
    addleftchild(three,six);
    addrightchild(three,seven);

    printf("\nPRE-Order:----\n");
    preorder(root);
    printf("\nPOST-Order:----\n");
    postorder(root);
    printf("\nIN-Order:----\n");
    inorder(root);
}

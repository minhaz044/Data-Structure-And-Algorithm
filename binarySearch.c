
#include<stdio.h>


int binary_search(int a[],int n,int x){

int left=0;
int right=n-1;
int mid;
while(left<=right){
    mid=(right+left)/2;
    if(x==a[mid]){
        return mid;
    }
    if(x<a[mid]){
        right=mid-1;

    }
    else{
        left=mid+1;
    }

}
}


int main(){

int a[10]={1,2,3,4,5,6,7,8,9,10};
printf("Index number is %d\n",binary_search(a,10,5));

}

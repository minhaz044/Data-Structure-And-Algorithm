#include<stdio.h>
void selectionsort(int a[],int n){
int i=0,j=0,temp=0,min;
for(i=0;i< n-1;i++){
    min=i;
    for(j=i+1;j < n;j++){
    if(a[j]<a[min]){
        min=j;
    }

    }
    if(min!=i){
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
        }



}
}

int main(){

int a[10]={7,2,7,10,3,8,5,8,44,12};
int n=10,i=0;
selectionsort(a,n);
for(i=0;i<n;i++){
    printf("%d\n",a[i]);
}




}

#include<stdio.h>
void bubblesort(int a[],int n){
int i=0,j=0,temp=0;
for(i=0;i< n-1;i++){
    for(j=0;j < n-i-1;j++){
    if(a[j]>a[j+1]){
        temp=a[j+1];
        a[j+1]=a[j];
        a[j]=temp;
    }

    }

}
}

int main(){

int a[10]={7,2,7,10,3,8,5,8,44,12};
int n=10,i=0;
bubblesort(a,n);
for(i=0;i<n;i++){
    printf("%d\n",a[i]);
}




}

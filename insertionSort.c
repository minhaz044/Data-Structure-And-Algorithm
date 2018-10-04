#include<stdio.h>
void insertionsort(int a[],int n){
int i=0,j=0,temp=0;

for(i=0;i< n-1;i++){

    if(a[i]>a[i+1]){
    temp=a[i+1];
    j=i;
      while(a[j]>temp && j>=0){
      a[j+1]=a[j];
      if(a[j-1]<=temp || j == 0){
        a[j]=temp;
      }
        j--;
      }
    }
}
}

int main(){

int a[10]={7,2,7,10,3,8,5,8,44,12};
int n=10,i=0;

insertionsort(a,n);
for(i=0;i<n;i++){
   printf("%d\n",a[i]);
}




}


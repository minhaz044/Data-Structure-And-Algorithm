#include<stdio.h>

int left(int index){

    return 2*index;

}


int right(int index){

    return 2*index+1;

}


int parents(int index){

    return index/2;

}
void printheap(int a[],int n){
    printf("Resultant Heap =\t");
    int i=1;
    for(i=1;i<=n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");


}

/*


             100
        90         80
    55      40  50   45
  20   30




*/


void heapedit(int a[],int parents,int size){



    //printf("calling from %d \n",parents);
    int temp,l,r;
    l=left(parents);
    r=right(parents);
    if(a[parents] < a[l]  && a[l] > a[r]  && l<=size && r<=size){
        temp=a[parents];
        a[parents]=a[l];
        a[l]=temp;
            //printf("calling left \n");
        heapedit(a,l,size);

    }
     else if(l<=size && r<=size && a[parents] < a[r]) {
        temp=a[parents];
        a[parents]=a[r];
        a[r]=temp;
        //printf("calling right \n");
         heapedit(a,r,size);

    }else{
        return;
    }



}
/*



0,10,18,15,2,58,5,17,88,9,10

            18




*/
void heap(int a[],int size){


for(int i=size/2;i>=1;i--){

    printheap(a,size);
    heapedit(a,i,size);

}




}

int main(){

int n=6;
int a[6]={0,3,5,6,1,4};



    heap(a,5);

   printheap(a,5);


}

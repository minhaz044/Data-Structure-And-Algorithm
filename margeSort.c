
#include<stdio.h>

void margesort(int a[],int left,int right){

if(left>=right){
return ;
}
int mid=(left+right)/2;
margesort(a,left,mid);
margesort(a,mid+1,right);
marge(a,left,mid,right);
    printf("\n\nAfter Marge \t");
for(int k=left;k<=right;k++){
    printf("%d\t",a[k]);
}    printf("\n");

}
void marge(int a[],int left,int mid,int right){

int size_l,size_r,i,ptrl=0,ptrr=0,lft=left;
size_l=mid-left+1;
size_r=right-mid;
int l[size_l],r[size_r];


for(i=0;i<size_l;i++){
    l[i]=a[left+i];
    //printf("left %d \t",l[i]);

}
for(i=0;i<size_r;i++){
    r[i]=a[mid+i+1];
       // printf(" right %d  \t",r[i]);
}

while(left<=right){

    if(l[ptrl]<r[ptrr] && ptrl<size_l && ptrr<size_r){

        a[left]=l[ptrl];

        ptrl++;
        left++;

            printf("1st a[ptrl]= %d ,ptrl=%d , ptrr=%d , left=%d ,right= %d \n",l[ptrl-1],ptrl,ptrr,left,right);
    }
    else if(l[ptrl]>r[ptrr] && ptrl<size_l && ptrr<size_r){
        a[left]=r[ptrr];

        ptrr++;
        left++;
                 printf("2nd a[ptrr]= %d , ptrl=%d, ptrr=%d , left=%d ,right= %d  \n",r[ptrr-1],ptrl,ptrr,left,right);
    }else if(ptrl>=size_l){

        a[left]=r[ptrr];

        ptrr++;
        left++;
                printf(" 3rd  a[ptrr]= %d , ptrl=%d  , ptrr=%d , left=%d ,right= %d  \n",r[ptrr-1],ptrl,ptrr,left,right);

    }else{
        a[left]=l[ptrl];

        ptrl++;
        left++;
                 printf(" 4th  a[ptrl]= %d , ptrl=%d  , ptrr=%d , left=%d ,right= %d  \n",l[ptrl-1],ptrl,ptrr,left,right);
    }


}
}


int main(){

int a[10]={7,2,5,10,3,8,5,8,44,12};
int n=10,i=0;
margesort(a,0,n-1);

printf("\n\n--Sorted List:\n");
for(i=0;i<n;i++){
    printf("\t%d\n",a[i]);
}


}

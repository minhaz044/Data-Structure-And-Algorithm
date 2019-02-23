#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,j,a[50],b[50][50];
    scanf("%d",&n);
    a[0]=0;
    for(i=1;i<=n;i++){
       scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for(j=0;j<=k;j++){
        b[0][j]=j;
    }
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=k;j++)
        {

           if(a[i]>j){
            b[i][j]=b[i-1][j];
           }
           else {
            b[i][j]=min(b[i][j-a[i]]+1,b[i-1][j]);
           }

        }
    }
printf("%d",b[n][k]);
}

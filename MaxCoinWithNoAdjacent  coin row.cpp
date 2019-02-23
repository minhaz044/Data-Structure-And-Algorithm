#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,a[50],b[50];
    scanf("%d",&n);
    a[0]=0;
    for(i=1; i<=n; i++)
    {

        scanf("%d",&a[i]);

    }

    b[0]=a[0];
    b[1]=a[1];
    for(i=2; i<=n; i++)
    {

        b[i]=max(a[i]+b[i-2],b[i-1]);


    }
    printf("%d",b[n]);

}

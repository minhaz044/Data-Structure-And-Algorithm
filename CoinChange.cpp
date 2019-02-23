#include<bits/stdc++.h>
using namespace std;
int i,j,k,n,a[50],ab[50][50];
int main()
{


    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }

    cin>>k;
    for(i=0;i<=k; i++)
    {
        ab[1][i]=i;
    }


    for(i=2; i<=n; i++)
    {
        for(j=1; j<=k; j++)
        {
            if(a[i]>j)
                ab[i][j]=ab[i-1][j];
            else
            {
                ab[i][j]=min(ab[i][j-a[i]]+1,ab[i-1][j]);
            }
        }
    }
    cout<<ab[n][k];



}

/*
2
1 2
5

*/

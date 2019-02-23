#include<bits/stdc++.h>
using namespace std;
int i,j,k,n,w[50],v[50],ab[50][50],r[50],c[50];
int main()
{


    cin>>n;
    for(i=1; i<=n; i++)
    {
        cout<<"Enter Weight "<<endl;
        cin>>w[i];
        cout<<"Enter Value "<<endl;
        cin>>v[i];
    }

    cin>>k;
    for(i=0;i<=n; i++)
    {
        ab[i][0]=0;
    }
    for(i=0;i<=k; i++)
    {
        ab[0][i]=0;
    }



    for(i=1; i<=n; i++)
    {
        for(j=1; j<=k; j++)
        {
            if(w[i]>j)
                ab[i][j]=ab[i-1][j];
            else
            {
                ab[i][j]=max(ab[i-1][j-w[i]]+v[i],ab[i-1][j]);
            }
        }
    }
    int d=1;
       for(i=n; i>=1; i--)
    {
        for(j=k; j>=1; j--)
        {
            if(ab[i][j]!=ab[i+1][j]){
                j=k-w[i];
                i=ab[i][j]-v[]





               r[d]=i;
               c[d]=j;
               d++;


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

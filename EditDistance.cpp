#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l1,l2,a[50][50],i,j;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    l1=s1.length();
    l2=s2.length();
    for(i=0;i<l1;i++){
        a[i][0]=0;
    }
    for(i=0;i<21;i++){
        a[0][i]=0;
    }
    for(int i=1;i<=l1; i++){
        for(int j=1;j<=l2;j++){
            if(s1[i-1]==s2[j-1]){
                a[i][j]=a[i-1][j-1];
            }
            else{
                a[i][j]=min(a[i-1][j],min(a[i][j-1],a[i-1][j-1]))+1;
            }
        }



}
printf("%d",a[l1][l2]);
}

#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int a[100][100];

int main()
{

    int l1,l2,a[100][100];
    string s1,s2;
    printf("enter string 1:");
    cin>>s1;
    printf("enter string 2:");
    cin>>s2;
    l1=s1.length();
    l2=s2.length();

    for(int i=0;i<l1;i++){
        a[i][0]=0;
    }
    for(int i=0; i<l2; i++){
        a[0][i]=0;
    }

    for(int i=1;i<=l1; i++){
        for(int j=1;j<=l2;j++){
            if(s1[i-1]==s2[j-1]){
                a[i][j]=a[i-1][j-1]+1;
            }
            else{
                a[i][j]=max(a[i-1][j],a[i][j-1]);
            }
        }
    }

    cout<<a[l1][l2]<<endl;


    return 0;
}


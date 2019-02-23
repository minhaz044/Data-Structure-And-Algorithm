#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){

    int x[1001],y[1001],m,counter=0;
    float h_theta[1001],theta_0,theta_1,cost,temp_0,temp_1,sum,alpha;
    printf("\nTheta 0=");
    scanf("%d",&theta_0);
    printf("\nTheta 1=");
    scanf("%d",&theta_1);
    printf("\Number of data m=");
    scanf("%d",&m);
    printf("\Value of Alpha @=");
    scanf("%d",&alpha);


    for(int i=1;i<=m;i++){

    x[i]=i-1;//those are also random ,but i made this for simplicity
    y[i]=rand()%10;

    }




    for(int i=1;i<=m;i++){

    h_theta[i]=theta_0+(theta_1*x[i]);

    }

    sum=0;temp_0=0;temp_1=0;
    for(int i=1;i<=m;i++){

    sum+=(y[i]-h_theta[i])*(y[i]-h_theta[i]);
    temp_0+=(y[i]-h_theta[i]);
    temp_1+=(y[i]-h_theta[i])*x[i];
    }
    cost=(1/2*m)*sum;
    theta_0=theta_0-(alpha*(1/m)*temp);
    theta_1=theta_1-(alpha*(1/m)*temp);

printf("Interation- %d \t  Theta_0= %f \t theta_1=%f \n",counter,theta_0,theta_1);
counter++;
}

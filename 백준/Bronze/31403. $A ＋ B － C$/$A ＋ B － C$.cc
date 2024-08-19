#include <stdio.h>
int main(){
    int i,j,k;
    scanf("%d",&i);
    scanf("%d",&j);
    scanf("%d",&k);
    printf("%d\n",i+j-k);
    if(j<=9 && j>=1){
        i*=10;
    }
    else if(j<=99 && j>=10){
        i*=100;
    }
    else if(j<=999 && j>=100){
        i*=1000;
    }
    else
    {
        i*=10000;
    }
    printf("%d",i+j-k);
}
#include <stdio.h>
int main(){
    int input;
    scanf("%d", &input);
    input /=4;
    while(input--){
        printf("long ");
    }
    printf("int");
}
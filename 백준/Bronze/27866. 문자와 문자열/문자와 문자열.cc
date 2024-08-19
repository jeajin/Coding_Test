#include <stdio.h>
int main(){
    char i[1000];
    int in;
    scanf("%s",i);
    scanf("%d",&in);
    printf("%c",i[in-1]);
    return 0;
}
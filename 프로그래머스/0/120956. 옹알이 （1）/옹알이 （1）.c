#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// babbling_len은 배열 babbling의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* babbling[], size_t babbling_len) {
    int answer = 0;
    char *ptr="";
    int count=0;
    int t;
    int rc[100]={0,};
    char** testwords[4]={"aya", "ye", "woo", "ma"};
          
    for(int i=0 ; i<babbling_len;i++){
        for(int s=0;s<4;s++){
            ptr = strstr(babbling[i],testwords[s]);
            if(ptr){            
                int len = ptr-babbling[i];
                printf("point:%d ",len);
                if(rc[len]==i+1){
                    rc[len]=0;
                }else{ rc[len]=i+1;
                }
                if(rc[len+1]==i+1){
                    rc[len+1]=0;
                }else{ rc[len+1]=i+1;
                }  
                if(s==0 || s==2){
                    printf("%s ",testwords[s]);
                    if(rc[len+2]==i+1){
                    rc[len+2]=0;
                     }else{ rc[len+2]=i+1;
                    }   
                }else{
                printf("%s ",testwords[s]);
                }
            }
        }
          
        t = 1;
        for(int j=0 ; j<strlen(babbling[i]) ; j++){
            printf("%d",rc[j]);
            if(rc[j] != i+1){
                t = 0;
            }
        }
        printf("\n");
        if(t != 0){
                count++;
        }
    }  
    

    answer = count;
    return answer;
}
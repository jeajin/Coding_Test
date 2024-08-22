#include <iostream>
#include <algorithm>
typedef struct ACGT {
    int a = 0;
    int c = 0;
    int g = 0;
    int t = 0;
} ACGT;

void setMinusACGT(char minus,char plus, ACGT* flag) {	

	switch(plus) {
        case 'A' : flag->a++; break;
        case 'C' : flag->c++; break;
        case 'G' : flag->g++; break;
        case 'T' : flag->t++; break;
        default : break;
    }				
    switch(minus) {
        case 'A' : flag->a--; break;
        case 'C' : flag->c--; break;
        case 'G' : flag->g--; break;
        case 'T' : flag->t--; break;
        case 'x'	: break;
        default : break;
    }
	

}

using namespace std;
int main(){
	ACGT flag;
	int p,s;
	scanf("%d %d\n", &s, &p);
	    
	char str[s+2];
    scanf("%s\n", str+1);
    
    str[0]='x';
	int a, c, g, t;
    scanf("%d %d %d %d", &a, &c, &g, &t); 
    
	int min_len = a+c+g+t;
	int move = s-p+1;
	
	int temp=p;
	while(temp--){
		setMinusACGT('x',str[temp],&flag);		
	}
	temp=s-1;
	int index=0;
	int count=0;
	temp = 0;
	int aa,cc,gg,tt;
	while(move){
		do{
			setMinusACGT(str[index],str[(index)+p],&flag);
			index++;
			move--;			
			if(index+p >s+1){
				move =0;
				break;
			}
		}while(temp--);
		aa = a-flag.a;
		cc = c-flag.c;
		gg = g-flag.g;
		tt = t-flag.t;
		if (0>=aa && 0>=cc && flag.g>=g && flag.t>=t) {
            count++;
            temp=0;
        }else{
        	temp = (aa > 0?aa:0) + (cc > 0?cc:0) + (gg > 0?gg:0)  + (tt > 0?tt:0)-1; 
        	if (temp <= 0) temp = 0;
		}
	}
	printf("%d",count);
    return 0;
}

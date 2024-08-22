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
	while(move--){
		
			setMinusACGT(str[index],str[(index)+p],&flag);
	
		
		if (flag.a>=a && flag.c>=c && flag.g>=g && flag.t>=t) {
            count++;
        }
      
		index++;
	}
	printf("%d",count);
    return 0;
}

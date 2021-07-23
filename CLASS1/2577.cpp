#include <stdio.h>
int main(){
	int a,b,c,temp,o,co,i;
	scanf("%d %d %d",&a,&b,&c);
	o=a*b*c;
  	for(i=0;i<10;i++){
  		temp=o;
  		co=0;
  		while(temp){
  			if(temp%10==i){
  				co++;
			  }
			  temp/=10;
		  }
		  printf("%d\n",co); 		
	}
	
    return 0;
}

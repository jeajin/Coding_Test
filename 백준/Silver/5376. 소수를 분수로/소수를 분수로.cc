#include <stdio.h>
long GCD(long a, long b)
{
	if (b == 0)	return a;
	return GCD(b, a % b);
	
}
int main()
{
    long c,n,i,nc,ci,in,t,cc,cn,a,b,p;
    char s[100];
    scanf("%d",&c);
    while(c--){
	    scanf("%s",s);
	    nc=0,ci=0,in=2,cc=0,cn=0,p=1,a=1,b=1;
	    while(1){	    	
	    	t=(long)s[in++]-48;
	    	if(t<0||t>9){break;
			}else{
				nc*=10;nc+=t,cn++;
			}	    	
		}
		if(s[--in]=='('){
			while(in++!=')'){	    	
		    	t=(long)s[in]-48;	    	
			    if(t<0||t>9){break;
				}else{
					ci*=10;ci+=t;cc++;
				} 	    	
			}
		}
		
		while (cn--) b *= 10;
		if(cc){
			while (cc--) a *= 10;
			nc=a*nc+ci-nc;
			ci=(a-1)*b;
		}else{
			ci=b;
		}		
		n=nc;
		p=GCD(nc,ci);

	    printf("%ld\/%ld\n",nc/p,ci/p);
	}

    return 0;
}
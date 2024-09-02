#include <stdio.h>
#include <stdlib.h>   

int compare(const void *a, const void *b)  
{
    int num1 = *(int *)a;    
    int num2 = *(int *)b;    
    if (num1 < num2)    
        return -1;        
    if (num1 > num2)    
        return 1;          
    return 0;    
}

int main() {
	int sortbuffer[1000000],count;
	scanf("%d",&count);
	for(int i=0; i<count; i++) scanf("%d", &sortbuffer[i]);
    qsort(sortbuffer, count, sizeof(int), compare);  
    for(int i=0; i<count; i++) printf("%d\n", sortbuffer[i]);
	return 0;
}
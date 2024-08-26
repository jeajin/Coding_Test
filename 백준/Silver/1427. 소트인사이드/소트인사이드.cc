
#include <stdio.h>
#include <string.h>

int main() {

	 
  
    char str[11];
    scanf("%s", str);
	char tmp;
	for (int i = 0; i < strlen(str) - 1; i++) {
		for (int j = 0; j < strlen(str); j++) {
			if (str[j] < str[j + 1]) {
				tmp = str[j];
				str[j] = str[j + 1];
				str[j + 1] = tmp;
			}
		}
	}
 

	printf("%s",str);
 
}


#include <stdio.h>
#include <time.h>
int main(){
time_t t = time(NULL);
struct tm * tt = localtime(&t);
printf("%04d-%02d-%d",tt->tm_year+1900,tt->tm_mon+1,tt->tm_mday);
}
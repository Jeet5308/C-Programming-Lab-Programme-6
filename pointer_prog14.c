#include <stdio.h>
int main() {
    int a=5,b=10,*p1=&a,*p2=&b;
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    printf("a=%d b=%d",a,b);
    return 0;
}
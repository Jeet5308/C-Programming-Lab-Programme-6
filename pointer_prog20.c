#include <stdio.h>
int main() {
    int x=5;
    int *p=&x;
    int **dp=&p;
    int ***tp=&dp;
    printf("Address of x: %p\n", &x);
    printf("p points to: %p\n", p);
    printf("dp points to: %p\n", dp);
    printf("tp points to: %p\n", tp);
    return 0;
}
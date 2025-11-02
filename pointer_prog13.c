#include <stdio.h>
int main() {
    int x = 99;
    int *p = &x;
    int **dp = &p;
    int ***tp = &dp;
    printf("Value using triple dereference: %d", ***tp);
    return 0;
}
#include <stdio.h>
int main() {
    int x = 50;
    int *p = &x;
    int **dp = &p;
    printf("Value using double pointer: %d", **dp);
    return 0;
}
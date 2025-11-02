#include <stdio.h>
int main() {
    int x = 10;
    int *ptr = &x;
    *ptr = 20;
    printf("Updated value: %d", x);
    return 0;
}
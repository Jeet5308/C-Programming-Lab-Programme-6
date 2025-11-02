#include <stdio.h>
int main() {
    int x = 10;
    int *ptr = &x;
    printf("Value using pointer: %d", *ptr);
    return 0;
}
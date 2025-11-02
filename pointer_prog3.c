#include <stdio.h>
int main() {
    int x = 5;
    int *ptr = &x;
    printf("Address: %p, Value: %d", ptr, *ptr);
    return 0;
}
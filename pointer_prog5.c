#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40};
    int *ptr = arr;
    printf("Third element: %d", *(ptr + 2));
    return 0;
}
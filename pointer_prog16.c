#include <stdio.h>
int main() {
    int arr[] = {1,4,5,6,9};
    int *p1 = arr, *p2 = arr + 4;
    while(p1 < p2) {
        printf("(%d,%d)\n", *p1, *p2);
        p1++; p2--;
    }
    return 0;
}
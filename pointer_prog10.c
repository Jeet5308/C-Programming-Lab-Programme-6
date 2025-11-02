#include <stdio.h>
int main() {
    int a[5] = {1,2,3,4,5}, b[5];
    int *p1 = a, *p2 = b;
    for(int i=0;i<5;i++) *(p2+i) = *(p1+i);
    printf("Copied array: ");
    for(int i=0;i<5;i++) printf("%d ", b[i]);
    return 0;
}
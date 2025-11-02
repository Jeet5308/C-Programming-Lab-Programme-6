#include <stdio.h>
int main() {
    int a = 5, b = 5;
    int *p1 = &a, *p2 = &a;
    if(p1 == p2) printf("Both point to same location");
    else printf("Different locations");
    return 0;
}
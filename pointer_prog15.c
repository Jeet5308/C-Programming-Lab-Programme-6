#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Pointer";
    char *mid = str + strlen(str)/2;
    printf("Middle: %c\n", *mid);
    printf("Remainder: %s", mid);
    return 0;
}
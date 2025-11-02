#include <stdio.h>
int main() {
    char *arr[] = {"one","two","three","four"};
    char **dptr = arr;
    printf("Third string: %s", *(dptr+2));
    return 0;
}
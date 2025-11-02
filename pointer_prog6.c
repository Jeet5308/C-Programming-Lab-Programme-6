#include <stdio.h>
int main() {
    char str[] = "Hello";
    char *ptr = str;
    for(; *ptr; ptr++) printf("%c ", *ptr);
    return 0;
}
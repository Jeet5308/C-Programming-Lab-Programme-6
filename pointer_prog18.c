#include <stdio.h>
#include <string.h>
int main() {
    char s1[]="hello", s2[]="heLlo";
    char *p1=s1, *p2=s2;
    int i=0;
    while(*p1 && *p2){
        if(*p1 != *p2){
            printf("Differ at index %d: %c vs %c", i, *p1, *p2);
            return 0;
        }
        p1++; p2++; i++;
    }
    printf("Strings are same");
    return 0;
}
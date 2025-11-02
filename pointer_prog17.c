#include <stdio.h>
int main() {
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int *p[3]={arr[0],arr[1],arr[2]};
    int **dp=p;
    printf("Diagonal elements: ");
    for(int i=0;i<3;i++) printf("%d ", *(*(dp+i)+i));
    return 0;
}
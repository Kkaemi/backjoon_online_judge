#include <stdio.h>

int main() {
    int height;
    scanf("%d",&height);
    for (int i=0; i<height; i++) {
        for (int j=height-1; j>i; j--) {
            printf(" ");
        }
        for (int k=0; k<i+1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
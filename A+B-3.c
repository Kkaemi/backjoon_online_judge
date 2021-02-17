#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, length, a, b;

    scanf("%d", &length);

    int *t = (int*)malloc(sizeof(int) * length);

    for (i=0; i<length; i++) {
        scanf("%d %d",&a,&b);
        t[i] = a + b;
    }

    for (i=0; i<length; i++) {
        printf("%d\n",t[i]);
    }

    free(t);

    return 0;
}
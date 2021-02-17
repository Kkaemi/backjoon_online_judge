#include <stdio.h>
#include <stdlib.h>

int main() {

    int max, length = 0;
    int number[9] = {};

    for (int i=0; i<9; i++) {
        scanf("%d",&number[i]);
    }

    max = number[0];

    for (int i=1; i<9; i++) {
        if (number[i] > max) {
            max = number[i];
        }
    }

    for (int i=0; i<9; i++) {
        if (max == number[i]) {
            length += 1;
        }
    }

    int *index = (int*)malloc(sizeof(int) * length);

    for (int i=0; i<length; i++) {
        for (int j=i; j<9; j++) {
            if (max == number[j]) {
                index[i] = j;
                break;
            }
        }
    }

    printf("%d\n",max);

    for (int i=0; i<length; i++) {
        printf("%d\n",index[i] + 1);
    }

    free(index);

    return 0;
}
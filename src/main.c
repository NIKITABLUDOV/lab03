#include <stdio.h>

int main() {

    int num=8, i;

    for (i = 0; i <= 10; ++i) {
        printf("Left shift by %d: %d\n", i, num << i);    
    }

    return 0;
}

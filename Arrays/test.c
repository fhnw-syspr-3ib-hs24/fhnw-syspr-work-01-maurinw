#include <stdio.h>

int main(void) {

    for(int i = 0; i < 10; i++) {
        printf("%i\n", i);
    }

    int a[] = {0, 1, 2, 3};
    a[5] = 10;
    printf("%i\n", a[5]);

    for (int i = 0; i < 5; i++) {
        printf("%i", a[i]);
    }
    
    return 0;
}
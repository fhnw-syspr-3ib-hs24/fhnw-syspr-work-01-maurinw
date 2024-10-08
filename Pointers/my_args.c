#include <stdio.h>

int main(int argc, char *argv[]) {
    
    for (int i = 1; i < argc; i++) {
        for (char *p = argv[i]; *p != '\0'; p++) {
            if (*p < 'a' || *p > 'z') {
                printf("error: args must contain [a-z]* only\n");
                return -1;
            }
        }
    }
    
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    
    return 0;
}

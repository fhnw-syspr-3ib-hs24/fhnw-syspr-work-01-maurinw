#include <stdio.h>

int main() {
    int zahl = 10;       // Eine ganz normale Variable
    int *ptr = &zahl;    // Pointer 'ptr' speichert die Adresse von 'zahl'

    // Ausgabe der Adresse von 'zahl'
    printf("Adresse von zahl: %p\n", ptr);

    // Zugriff auf den Wert von 'zahl' über den Pointer
    printf("Wert von zahl über Pointer: %d\n", *ptr);


    // Array Pointers
    int a[] = {1, 2, 3};
    int *p = a;
    printf("%d\n", *p); 
    printf("%d\n", *p + 1);
    printf("%d\n", *p + 2);

    // String Pointers
    char s[] = {'h', 'o', 'i', '\0'};
    for (char *p = s; *p != '\0'; p++) {
        printf("%c", *p);
    }
    printf("\n");

    char *s2 = "du";
    printf("%s\n", s2);
    return 0;
    
}

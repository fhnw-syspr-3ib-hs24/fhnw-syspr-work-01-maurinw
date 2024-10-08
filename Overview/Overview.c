#include <stdio.h>
#include <stdbool.h> // für bool Typ in C99

// Globale Variable
int global_var = 0;

// Funktion zur Addition von zwei Zahlen
int add(int x, int y) {
    return x + y;
}

// Funktion zum Tauschen zweier Werte über Pointer (call by reference)
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Hauptprogramm
int main(void) {
    // Ausgabe "Hello, World!"
    printf("Hello, World!\n");

    // Variablen-Deklaration und Initialisierung
    int a = 10;
    float b = 5.5;
    char c = 'A';
    bool isTrue = true; // bool in C99
    char *s = "Hallo Welt"; // String as Pointer to char

    // Konstante
    const int constant_val = 42;

    // Symbolische Konstante mit #define
    #define PI 3.14159
    printf("Konstante PI: %.5f\n", PI);

    // Ausgabe der Variablen
    printf("Integer a: %d\n", a);
    printf("Float b: %.2f\n", b);
    printf("Character c: %c\n", c);
    printf("Boolean isTrue: %s\n", isTrue ? "true" : "false");

    // Array
    int numbers[] = {1, 2, 3, 4, 5};
    printf("Array numbers[2]: %d\n", numbers[2]);

    // Pointer
    int *p = &a; // Zeiger auf a
    printf("Pointer p zeigt auf: %d\n", *p);

    // Einfache if-Anweisung
    if (a > 5) {
        printf("a ist größer als 5\n");
    } else {
        printf("a ist kleiner oder gleich 5\n");
    }

    // Bedingte Ausführung mit switch
    int ch = 1;
    switch (ch) {
        case 1:
            printf("ch ist 1\n");
            break;
        case 2:
            printf("ch ist 2\n");
            break;
        default:
            printf("ch ist weder 1 noch 2\n");
    }

    // for-Schleife
    printf("for-Schleife Beispiel:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // while-Schleife
    printf("while-Schleife Beispiel:\n");
    int count = 0;
    while (count < 3) {
        printf("count: %d\n", count);
        count++;
    }

    // do-while-Schleife
    printf("do-while-Schleife Beispiel:\n");
    int input;
    do {
        printf("Bitte geben Sie eine Zahl größer als 0 ein: ");
        scanf("%d", &input);
    } while (input <= 0);

    // Typumwandlung
    float f = 7.5;
    int i = (int) f; // explizite Typumwandlung
    printf("Umgewandelter float zu int: %d\n", i);

    // Funktion aufrufen
    int result = add(10, 20);
    printf("Summe von 10 und 20: %d\n", result);

    // Werte tauschen mit swap Funktion
    int x = 5, y = 10;
    printf("Vor dem Tausch: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("Nach dem Tausch: x = %d, y = %d\n", x, y);

    // Grösse von Datentypen mit sizeof()
    printf("Größe von int: %lu Bytes\n", sizeof(int));
    printf("Größe von float: %lu Bytes\n", sizeof(float));
    printf("Größe von char: %lu Bytes\n", sizeof(char));
    printf("Größe von bool: %lu Bytes\n", sizeof(bool));

    // Ausgabe einer globalen Variable
    printf("Globale Variable: %d\n", global_var);

    return 0;
}

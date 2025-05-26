#include <stdio.h>

//1 Nummer

int int_even_odd(int num) {
    if (num == 0) {
        return 0;
    } else if (num % 2 == 0) {
        return 2;
    } else {
        return 1;
    }
}


int main(int argc, char **argv) {
  
    int zahl1 = 0;
    int zahl2 = 7;
    int zahl3 = 8;

   printf("Zahl 1: %d, Ergebnis: %d\n", zahl1, int_even_odd(zahl1));
    printf("Zahl 2: %d, Ergebnis: %d\n", zahl2, int_even_odd(zahl2));
    printf("Zahl 3: %d, Ergebnis: %d\n", zahl3, int_even_odd(zahl3));

    return 0;

//Nummer 2















}

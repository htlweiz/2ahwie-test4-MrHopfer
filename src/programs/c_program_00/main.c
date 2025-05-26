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



 
  
    
    // Aufgabe 2
    int arry[10] = {3, 1, 7, 4, 9, 1, 5, 10, -2, 2};
    int len = sizeof(arry) / sizeof(arry[0]);

     for (int i = 0; i < len; i++) {
        printf("Zahl %d: %d\n", i + 1, arry[i]);
  



//Aufgabe 3

#include <stdio.h>

int main() {
    int int_numbers[5];
    int gerade = 0, ungerade = 0, summe = 0;

    
    for (int i = 0; i < 5; i++) {
        printf("Geben Sie Zahl %d ein: ", i + 1);
        scanf("%d", &int_numbers[i]);
    }

    
    for (int i = 0; i < 5; i++) {
        summe += int_numbers[i];
        if (int_numbers[i] % 2 == 0) {
            gerade++;
        } else {
            ungerade++;
        }
    }

    printf("Anzahl der geraden Zahlen: %d\n", gerade);
    printf("Anzahl der ungeraden Zahlen: %d\n", ungerade);
    printf("Summe aller Zahlen: %d\n", summe);

    return 0;
}









reurn 0;

}

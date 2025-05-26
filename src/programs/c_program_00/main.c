#include <stdio.h>

// Aufgabe 1

int int_even_odd(int num)
{
  if (num == 0)
  {
    return 0;
  }
  else if (num % 2 == 0)
  {
    return 2;
  }
  else
  {
    return 1;
  }
}

int main(int argc, char **argv)
{

  int zahl1 = 0;
  int zahl2 = 7;
  int zahl3 = 8;
 
  printf("Zahl 1: %d, Ergebnis: %d\n", zahl1, int_even_odd(zahl1));
  printf("Zahl 2: %d, Ergebnis: %d\n", zahl2, int_even_odd(zahl2));
  printf("Zahl 3: %d, Ergebnis: %d\n", zahl3, int_even_odd(zahl3));

  return 0;

  // Aufgabe 2
  int array[10] = {3, 1, 7, 4, 9, 1, 5, 10, -2, 2};
  int len = sizeof(array) / sizeof(array[0]);

  for (int i = 0; i < len; i++)
  {
    printf("Zahl %d: %d\n", i + 1, array[i]);
  }

  // Aufgabe 3

  int int_numbers[5];
  int x = 0, y = 0, s = 0;

  for (int i = 0; i < 5; i++)
  {
    printf("Geben Sie Zahl %d ein: ", i + 1);
    scanf("%d", &int_numbers[i]);
  }

  for (int i = 0; i < 5; i++)
  {
    s += int_numbers[i];
    if (int_numbers[i] % 2 == 0)
    {
      x++;
    }
    else
    {
      y++;
    }
  }

  printf("Anzahl der geraden Zahlen: %d\n", x);
  printf("Anzahl der ungeraden Zahlen: %d\n", y);
  printf("Summe aller Zahlen: %d\n", s);

  return 0;
}




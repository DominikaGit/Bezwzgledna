#include <stdio.h>
/*Napisz program, ktory wczytuje ze standardowego wejscia liczbe calkowita n i wypisuje ze standardowego
 wyjscia wartosc bezwzgledna z n. Nei uzywaj funkcji bibliotecznych*/
int main() {
    int n, bezwzgledna;
    printf("Podaj liczbe: \n");
    scanf("%d", &n);
    bezwzgledna=n*(-1);

    if(n<0)
    {
        printf("Wartosc bezwzgledna %d", bezwzgledna);
    }
    else
    {
        printf("Wartosc bezwzgledna %d",n);
    }
    return 0;
}

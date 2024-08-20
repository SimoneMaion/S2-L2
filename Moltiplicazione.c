#include <stdio.h>

int main () {
    
    double fattore1;
    double fattore2;
    double prodotto;
    
    printf("Inserisci il primo numero:\n");
    scanf("%lf", &fattore1);

    printf("Inserisci il secondo numero:\n");
    scanf("%lf", &fattore2);

    prodotto = fattore1 * fattore2;

    printf("Il prodotto dei due numeri inseriti è: %f\n", prodotto);  
    return 0;
}
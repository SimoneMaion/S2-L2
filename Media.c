#include <stdio.h>

int main () {
    
    double numero1;
    double numero2;
    double media;
    
    printf("Inserisci il primo numero:\n");
    scanf("%lf", &numero1);

    printf("Inserisci il secondo numero:\n");
    scanf("%lf", &numero2);

    media = (numero1 + numero2) / 2;

    printf("La media dei due numeri inseriti è: %lf\n", media);
    return 0;
}
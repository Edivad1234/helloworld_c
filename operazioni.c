#include <stdio.h>

int main(){
int numero1, numero2;
int somma, prodotto, resto, divisione, sottrazione;

printf("Inserisci il primo  numero (il numero deve essere intero):");
scanf("%d", &numero1);
printf("Inserisci il secondo numero (sempre intero):");
scanf("%d", &numero2);

somma= numero1+numero2;
sottrazione= numero1-numero2;
divisione= numero1/numero2;
resto= numero1%numero2;
prodotto= numero1*numero2;


printf("La somma:" " %d+%d=%d\n", numero1, numero2, somma);
printf("La differenza:" " %d-%d=%d\n", numero1, numero2, sottrazione);
printf("La divisione:" " %d/%d=%d\n", numero1, numero2, divisione);
printf("La moltiplicazione:" " %d*%d=%d\n", numero1, numero2, prodotto);
printf("Il resto:" " %d %% %d=%d\n", numero1, numero2, resto);

return 0;
}

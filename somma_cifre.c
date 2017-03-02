#include <stdio.h>

int main () {
int max=999, min=99;
int numero, sommacifre, cifra3, cifra2, cifra1;

do{
printf("Inserisci un numero a tre cifre: ");
scanf("%d", &numero);

}while(numero<=min || numero>max); 

if (numero>min && numero<=max){
cifra3= numero%10;
numero= numero/10;

cifra2= numero%10;
numero= numero/10;

cifra1= numero%10;
numero= numero/10;
}

sommacifre= cifra1+cifra2+cifra3;
printf("La somma delle cifre e': %d\n", sommacifre);

return 0;
}

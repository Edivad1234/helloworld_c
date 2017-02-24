#include <stdio.h>

int main(){
int r;
double c, s;
double p=3.14;
printf("Inserisci il valore del raggio: ");
scanf("%d", &r);
c= 2.0*p*r;
s= (r*r)*p;

printf("La circonferenza di un cerchio avente come raggio %d= %.2f\n",r,c);
printf("La superficie di un cerchio avente come raggio %d= %.2f\n", r,s);

return 0;
}

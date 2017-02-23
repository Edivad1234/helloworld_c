#include <stdio.h>

int main(){
int r, c, s;
double p=3.14;
printf("Inserisci il valore del raggio: ");
scanf("%d", &r);
c= 2.0*p*r;
s= (r*r)*p;

printf("La circonferenza di un cerchio avente come raggio %d= %d\n",r,c);
printf("La superficie di un cerchio avente come raggio %d= %d\n", r,s);

return 0;
}

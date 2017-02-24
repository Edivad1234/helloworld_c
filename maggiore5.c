#include <stdio.h>

int main (){
int a, b, c, d, e;
printf("Inserisci primo numero: ");
scanf("%d", &a);
printf("Inserisci secondo numero: ");
scanf("%d", &b);
printf("Inserisci terzo numero: ");
scanf("%d", &c);
printf("Inserisci quarto numero: ");
scanf("%d", &d);
printf("Inserisci quinto numero: ");
scanf("%d", &e);

int numeromaggiore=a;
if (b>numeromaggiore){
numeromaggiore=b;
}
else if(c>numeromaggiore){
numeromaggiore=c;
}
else if(d>numeromaggiore){
numeromaggiore=d;
}
else if(e>numeromaggiore){
numeromaggiore=e;
}
printf("Il numero piu' grande tra i cinque e': %d\n", numeromaggiore);

return 0;
}

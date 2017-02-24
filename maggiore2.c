#include <stdio.h>

int main (){
int a, b;

printf("Inserisci il primo numero (intero): ");
scanf("%d", &a);
printf("Inserisci il secondo numero (intero): ");
scanf("%d", &b);

if (a==b){
printf("I numeri inseriti soni uguali!\n");
}
else if (a>b){
printf("Il primo numero:(%d) e' maggiore del secondo: (%d).\n",a, b);
}
else {
printf("Il secondo numero: (%d) e' maggiore del primo: (%d).\n",b, a);
}
return 0;
}

#include <stdio.h>

int main (){
int a, b;
int maggiore=0;
printf("Inserisci il primo numero (intero): ");
scanf("%d", &a);
printf("Inserisci il secondo numero (intero): ");
scanf("%d", &b);
maggiore=a;
if(b>maggiore){
maggiore=b;
}
printf("Il maggiore e': %d\n", maggiore);
return 0;
}

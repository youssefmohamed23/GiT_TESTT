#include <stdio.h>
#include <stdlib.h>
#include"Functions.h"


int main() {

while(1){
char pin ;
int b , n;
printf("Enter operation first letter ,number and bit.\n");
scanf(" %c%d%d" ,&pin , &n , &b  );
if(pin == 's') printf("set of bit %d in %d = %d \n" ,b,n, set(b , n));
else if(pin == 'c') printf("clear of bit %d in %d = %d \n" ,b,n, clear(b , n));
else if(pin == 't') printf("toggle of bit %d in %d = %d \n" ,b,n, toggle(b , n));
else if(pin == 'g') printf("get of bit %d in %d = %d \n" ,b,n, get(b , n));
else printf("Invalid Operation \n");
}
 return 0;
}

/*
 * Este programa ayudara al usuario sacar el pi con la cantidad de
 * decimales que el desee.
 * Nombre: Óscar Rubén Gómez Ríos
 * Matricula:A01411750
 * Correo: A01411750@itesm.mx
 */
#include <stdio.h>
#include <math.h>

int main() {
    unsigned int n;
    int k;
    double pi = 0;

    printf("¿A cuántos decimales quieres que te muestre? ");
    scanf("%d",&n);

   for( k = 0; k < n; k++) {
       pi += pow(16.0, -k) * ((4.0 / (8 * k + 1.0)) - (2.0 / (8 * k + 4)) - (1.0 / (8 * k + 5)) - (1.0 / (8 * k + 6)));
   }

    printf("El valor de pi a %d decimales es %.*f",n ,n, pi);
    return 0;


}
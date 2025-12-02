/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    float P, costo;

    printf("Ingrese el peso de la carta en gramos: ");
    scanf("%f", &P);

    if (P > 0 && P < 50)
        costo = 1.50;
    else if (P <= 100)
        costo = 4.00;
    else if (P <= 200)
        costo = 6.00;
    else if (P <= 350)
        costo = 10.50;
    else if (P <= 500)
        costo = 15.00;
    else {
        printf("NO PUEDE ENVIAR COMO CARTA.\n");
        return 0;
    }

    printf("El costo de envio es: Bs. %.2f\n", costo);
    return 0;
}

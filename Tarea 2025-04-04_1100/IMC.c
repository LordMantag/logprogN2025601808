#include <stdio.h>

int main()
{
    float peso, altura, IMC;

    printf("INGRESE SU ALTURA EN METROS\n");
    scanf("%f", &altura);

    printf("INGRESE SU PESO EN KG\n");
    scanf("%f", &peso);

    IMC = peso / (altura * altura);

    if (IMC >= 40) {
        printf("IMC INDICA OBESIDAD CLASE 3\n");
    }
    else if (IMC >= 35) {
        printf("IMC INDICA OBESIDAD CLASE 2\n");
    }
    else if (IMC >= 30) {
        printf("IMC INDICA OBESIDAD CLASE 1\n");
    }
    else if (IMC >= 25) {
        printf("IMC INDICA SOBREPESO\n");
    }
    else if (IMC >= 18.5) {
        printf("IMC INDICA PESO NORMAL\n");
    }
    else {
        printf("IMC INDICA BAJO PESO\n");
    }

    return 0;
}


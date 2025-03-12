
#include <stdio.h>
#include <math.h>

int main()
{
    int L = 12;
    float A = (1.0 / 2.0) * L; // mitad de L
    float B = (L*L)-(pow(A,2));
    float C = sqrt (B); //Lado A
    float D = (A*C)/2; //Area del triangulo
    float E = C/2; // Altura romboide
    float F = (L*E); // Area de romboide

    float At = F+D;

    printf("Area total: %.2f\n", At);

    int precio = 9256;
    float total;
    float IVA= 0.16;
    float preciototal;

    total= At*precio;
    preciototal= total+(total*IVA);

    printf("Precio total; %f, \n", preciototal);
    return 0;
}

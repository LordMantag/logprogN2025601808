#include <stdio.h>
#include <math.h>

int main()
{
    int L = 2;
    float A = (1.0 / 4.0) * L;
    float B = (1.0 / 2.0) * L;
    float D = (3.0 / 2.0) * L;
    float C = sqrt((D * D) + (L * L));
    float E = (D * L) / 2.0;
    float F = (2 * L) * A;
    float C2= sqrt((L * L) + (L * L));
    float E2 = (L * L) / 2.0;

    float Pt = (2 * A) + (2 * L) + (2 * B) + C + (2*C2) + D;
    float At = (2 * E2) + (L * L) + F + E;

    printf("Area total: %.2f\n", At);
    printf("Perimetro total: %.2f\n", Pt);

    return 0;
}

#include <stdio.h>
#include <math.h>
int main ()
{

    int L= 7;
    float A= 3*L;
    float C= sqrt(((3*L)*(3*L))+(L*L));
    float D= ((M_PI)*((3.0/2.0)*L));
    float O= (3.0/2.0)*L;
    float E= ((M_PI)*(pow (O,2)))/2;
    float F= (A*L)/2;
    float G= A*L;
    float At= (2*F)+ (2*G) + E;
    float Pt= (3*L)+(4*L)+(2*C)+(D);
    printf ("Area total:%.2f\n",At);
    printf ("Perimetro total:%.2f\n",Pt);

    return 0;
}


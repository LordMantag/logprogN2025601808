#include <stdio.h>
#include <math.h>
int main ()
{

    int L= 7;
    float R= ((3.141)*2*(3.5))/2;
    float A= (3.141)*((L/2.0)*(L/2.0)/2);
    float L1= (3.0/5.0)*L;
    float L2= (L/5.0);
    float pt= ((L/5.0)*17)+(((3.0/5)*L)*2)+R;
    float at= (L*L)+((L1*L2)*2)+A+((L2*L2)*2);
    printf ("Area total:%.2f\n",at);
    printf ("Perimetro total:%.2f\n",pt);

    return 0;
}

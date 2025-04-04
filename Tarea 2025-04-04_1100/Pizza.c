#include <stdio.h>
int main()
{
    int pizza,veget,noveg;
    printf ("INGRESE LA PIZZA\n");
    printf ("PIZZA VEGETARIANA 1\n");
    printf ("PIZZA TRADICIONAL 2\n");
    scanf("%d",&pizza);
    if (pizza==1){
    printf ("INGRESA EL INGREDIENTE\n");
    printf ("PIMIENTO 1\n");
    printf ("TOFU 2\n");
    scanf("%d",&veget);
    if(veget==1){
    printf ("PIZZA VEGETARIANA CON MOZZARELLA, TOMATE Y PIMIENTO");
    }
    else {
    printf ("PIZZA VEGETARIANA CON MOZZARELLA, TOMATE Y TOFU");
    }
    }
    if (pizza==2){
    printf ("INGRESA INGREDIENTE\n");
    printf ("PEPPERONI 1\n");
    printf ("JAMON 2\n");
    printf ("SALMON 3\n");
    scanf("%d",&noveg);
    if (noveg==1){
    printf ("PIZZA TRADICIONAL CON MOZZARELLA, TOMATE Y PEPPERONI");
    }
    else if (noveg==2){
    printf ("PIZZA TRADICIONAL CON MOZZARELLA, TOMATE Y JAMON");
    }
    else{
    printf ("PIZZA TRADICIONAL CON MOZZARELLA, TOMATE Y SALMON");
    }
    }
   return 0;
}

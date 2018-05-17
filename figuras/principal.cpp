 #include "figura.h"
#include "circulo.h"

int main()
{
   /* Figura f1;
    f1.calculaArea();
    f1.imprimirArea();*/
    
    Circulo c1{10};
   // c1.calculaArea();
   //c1.imprimirArea();
    
    Figura *f2; //Apuntador el cual contiene la direccion de otro
    f2 = &c1;   //Direccion
    f2->calculaArea();
    f2->imprimirArea();
    
}
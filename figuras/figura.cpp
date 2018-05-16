#include <iostream>
#include "figura.h"

Figura::Figura()
{
    area=0;
}

void Figura::calculaArea()
{
    std::cout << "No se como calcular Area :´(\n";
}

void Figura::imprimirArea()
{
    std::cout << "El area es " << area << "\n";
}
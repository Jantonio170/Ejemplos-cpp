#include "circulo.h"

Circulo::Circulo(float r)
{
    this->radio=r;
}
void Circulo::calculaArea()
{
    area = 3.1416 * radio * radio;
}
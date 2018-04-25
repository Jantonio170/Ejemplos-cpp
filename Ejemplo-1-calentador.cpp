#include<iostream>

class Calentador
{
private: 
    int temperatura;
    int incremento;
    
public:
    Calentador();
    void calentar();
    void enfriar();
    void imprimeteTemperatura();
    int accedeTemperatura() const; //Metodo de Acceso y se le agrega la palabra const para saber que el metodo no modifica las variables
}; //punto y coma obligatorio

Calentador::Calentador()
{
    temperatura = 15;
    incremento = 3;
}

void Calentador::calentar()
{
    temperatura +=5;
}

void Calentador::enfriar()
{
    temperatura -=5;
}

void Calentador::imprimeteTemperatura()
{
    std::cout << "La temperatura es " << temperatura << "\n"; //Salto de linea std::endl o "/n"
}

int Calentador::accedeTemperatura() const
{
    return temperatura;
}

int main()
{
    Calentador c1;
    Calentador c2;
    
    c1.calentar();
    c1.imprimeteTemperatura();
    
    c2.enfriar();
    c2.imprimeteTemperatura();
}

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
    void imprimeFarenheit() const;
    int accedeTemperatura() const; //Metodo de Acceso y se le agrega la palabra const para saber que el metodo no modifica las variables de instancia
}; //punto y coma obligatorio

Calentador::Calentador()
{
    temperatura = 15;
    incremento = 3;
}

void Calentador::calentar()
{
    if(temperatura + incremento <= 30) {
        temperatura +=incremento;
    }
}

void Calentador::enfriar()
{
    if(temperatura - incremento >= -10) {
        temperatura -=incremento;
    }
}

void Calentador::imprimeteTemperatura()
{
    std::cout << "La temperatura es " << temperatura << "\n"; //Salto de linea std::endl o "/n"
}

int Calentador::accedeTemperatura() const
{
    return temperatura;
}

void Calentador::imprimeFarenheit() const
{
    float farenheit = temperatura * 1.8 + 32;
    std::cout << "La temperatura es " << farenheit << "°F" << std::endl;
}

int main()
{
    Calentador c1;
    Calentador c2;
    
    c1.calentar();
    c1.imprimeteTemperatura();
    c1.imprimeFarenheit();
    
    c2.enfriar();
    c2.imprimeteTemperatura();
    c2.imprimeFarenheit();

}

#ifndef FIGURA_INLUIDA
#define FIGURA_INLUIDA

class Figura
{
  protected:
  float area;
  public:
  Figura();
  virtual void calculaArea() = 0; //esto significa que un metodo es abstracto , el concepto abstracto es igual a virtual puro
  void imprimirArea();
};

#endif
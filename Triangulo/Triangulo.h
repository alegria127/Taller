/*
  Nombre: Triangulo.h
  Autor: IPOO - Univalle Tulua
  Fecha Creacion: 2020
  Fecha Modificaci�n: 2020
  Versi�n : 1.0
  Email: suMail
*/

#ifndef __CLASSTRIANGULO
#define __CLASSTRIANGULO
/*
   Clase: Triangulo
   Responsabilidad: La clase triangulo tiene la funcion de de calcular todas las operaciones que el usuario quiera saber 
                    acerca del triangulo
   Colaboraci�n:Punto.h
*/

#include "Punto.h" 
#include <cmath> //esta biblioteca sirve para utilizar los m�todos matematicos por ej:
                 //sqrt(y), pow(x,p)

class Triangulo
{
  private:
     Punto punto1;
     Punto punto2;
     Punto punto3;
  public:
	Triangulo(Punto dPunto1, Punto dPunto2, Punto dPunto3);
	double calcularLado1();
	double calcularLado2();
	double calcularLado3();
	double calcularPerimetro();
	double calcularArea();
	double calcularAltura();
};
#endif

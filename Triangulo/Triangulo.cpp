/*
  Nombre: Triangulo.cpp
  Autor: IPOO - Univalle Tulua
  Fecha Creacion: 2020
  Fecha Modificación: 2020
  Versión : 1.0
  Email: suMail
*/
#include "Punto.h"
#include "Triangulo.h"
#include <math.h>

Triangulo::Triangulo(Punto dPunto1,Punto dPunto2, Punto dPunto3)
{
    punto1 = dPunto1;
    punto2 = dPunto2;
    punto3 = dPunto3;
}

//utilice la formula de la distancia entre dos puntos para el método darLado1.
//es necesario utilizar las funciones pow(x,2), sqrt(y) de la biblioteca cmath
void cambiarX(int x1,int  x2);
void cambiarY(int y1,int  y2);
double Triangulo::calcularLado1()
{
    //calcula las restas
    double x1, x2, y1, y2, distancia =0;

    //calcula la distancia
    distancia = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    //completarlo
    return distancia;
}

double Triangulo::calcularLado2()
{
    //calcula la distancia
    double distancia = 0;
    return distancia;
}

double Triangulo::calcularLado3()
{
    //calcula la distancia
    double distancia = 0;
    return distancia;
}

double Triangulo::calcularPerimetro()
{
    return calcularLado1() + calcularLado2() + calcularLado3();
}

//Para calcular el area se puede utilizar la siguiente ecuación
//RaizCuadrada(s * (s - Lado1) * (s - Lado2) * (s - Lado3))
//Donde s = perimetro / 2

double Triangulo::calcularArea() //falta por implementar con base en la informacion anterior
{
    double area = 0;
    return area;
}

//Tenga en cuenta que area = (base * altura)/2
//Es necesario despejar altura
double Triangulo::calcularAltura() // falta por implementar
{
    double altura = 0;
    return altura;
}

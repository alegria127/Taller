#ifndef __CLASSMENU
#define __CLASSMENU


#include "Punto.h"
#include "Triangulo.h"






class Menu
{
	private:
    int opcion;
    double puntos;

	public:
	void visualizar();
	void mostrarMenu();
	double elegirPuntos(double puntos);
	double cambiarPuntos(double puntos);
	double calcularPerimetro(double calcularLados);
	double calcularDistancia(double puntos);
	double calcularLados(double puntos, double calcularDistancia);
	double calcularArea(double calcularLados, double calcularPerimetro);
	double calcularAltura();


 ~Menu();

};
#endif
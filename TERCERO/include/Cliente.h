/*
  Nombre: CDT.h
  Autor: IPOO - Univalle Tulua
  Fecha Creacion: 2020
  Fecha Modificacion: 2020
  Version : 1.0
  Email: suMail
*/
#ifndef __CLASSCLIENTE
#define __CLASSCLIENTE
/*
   Clase: Punto
   Responsabilidad:
    - 
    - 
   Colaboracion: ninguna
*/
#include "Mes.h"
#include "CuentaCorriente.h"
#include "CDT.h"
#include "CuentaAhorros.h"
#include <iostream>
using namespace std;
class Cliente
{
private:
    string nombre;
    string cedula;
public:
    Cliente(string,string,CuentaCorriente,CuentaAhorros,CDT,Mes);
    string darNombre();
    string darCedula();
    void invertirCDT(int,double);
    void consignarCuentaAhorro(int);
    void cerrarCDT();
    void retirarCuentaCorriente(int);
    void retirarCuentaAhorro(int);
    double saldoTotal();
    Mes darMesActualSimulacio();
    void avanzarMeSimulacion();
    ~Cliente();
};

Cliente::Cliente(string,string,CuentaCorriente,CuentaAhorros,CDT,Mes)
{
}

Cliente::~Cliente()
{
}

#endif // __CLASCLIENTE

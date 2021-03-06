/*
Nombre de archivo: Empleado.cpp
Version: 0.1
Fecha de creacion: 6/7/2020
Fecha de ultima modificacion: 6/7/2020
Autor: Miguel �ngel Askar Rodr�guez - 202055842
E-mail: miguel.askar@correounivalle.edu.co
*/

#include "Empleado.h"
#include "Fecha.h"
#include <iostream>
#include <cmath>
using namespace std;


Empleado::Empleado(string dNombre,
					string dApellido,
					int dSexo,
					int dSalario,
					Fecha dFechaNacimiento,
					Fecha dFechaIngreso,
					int dNumeroHijos,
					int destadoCivil)
{
	nombre= dNombre;
	apellido= dApellido;
	sexo= dSexo;
	salario= dSalario;
	fechaNacimiento= dFechaNacimiento;
	fechaIngreso= dFechaIngreso;
	numeroHijos= dNumeroHijos;
	//////
	estadoCivil = destadoCivil;	
	///////
}

Empleado::~Empleado()
{
	//Destructor.
}

string Empleado::darNombre()
{
	return nombre;
}

string Empleado::darApellido()
{
	return apellido;
}

int Empleado::darSexo()
{
	return sexo;
}

int Empleado::darSalario()
{
	return salario;
}

void Empleado::cambiarSalario(int nuevoSalario)
{
	salario= nuevoSalario;
}

int Empleado::calcularEdad()
{
	Fecha hoy(6, 7, 2020);
	int edad= fechaNacimiento.calcularDiferenciaMeses(hoy);
	return edad/12;
}

int Empleado::calcularAntiguedad()
{
	Fecha hoy(6, 7, 2020);
	int antiguedad= fechaIngreso.calcularDiferenciaMeses(hoy);
	return antiguedad/12;
}

int Empleado::calcularPrestaciones()
{
	int a= calcularAntiguedad();
	int p= (a*salario)/12;
	return p;
}

int Empleado::cantidadDeHijos()
{
	return numeroHijos;
}

double Empleado::auxilioEducativo()
{
	double auxilio= (darSalario() * 0.3) * cantidadDeHijos();
	return auxilio;
}

////////////////////////////////////////
int Empleado::darEstado(){
	return estado;
}

///////////////////////////////////////////////

int Empleado::calcularAuxilioConyugal(){
	double auxilioConyugal(darSalario() sqrt 75%); 

}

int Empleado::calcularAuxilioEducativo(int Nuevosalario){
	salario = Nuevosalario;
}

int Empleado::calcularDiferenciaSalarial(Empleado otroEmpleado){

}



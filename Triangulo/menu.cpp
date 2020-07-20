#include "menu.h"
#include <iostream>
#include <math.h>
#include <Triangulo.h>
using namespace std;
Menu::Menu(){
  Triangulo Triangulito(Punto dPunto1, Punto dPunto2, Punto dPunto3);
}
void Menu::mostrarMenu()

{

  cout<<endl;
    cout<<"                         TRIANGULO                   "<<endl;
	cout<<"1 - Crear Triangulo "<< endl;
	cout<<"2 - Salir" << endl;
	
 do
	{
		cout<<"Introduza Opcion: ";
		cin >> opcion;		
	}while(!((opcion>=1) && (opcion<=2)));
}
void Menu::visualizar()
{
	 do
    {
        switch (opcion)
        {
          case 1:
          cout<< "Crear Triangulo" <<endl;
          


          break;

          case 2:
          cout<<"Salir" <<endl;
          break;
        }

     }while(opcion!=2);




}

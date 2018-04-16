/*
Programa_6 votaciones
Estructura: selectiva doble
autor: Luis Alberto García Rodríguez
N° lista: 11
Fecha 10 de febrero del 2015
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int edad;
    cout << "**** Programa votaciones ****" << endl;
    cout<<"\n\n Cual es tu edad: ";
    cin>>edad;
        if (edad>=18)
        {
            cout<<"\n\n Usted si puede votar"<<endl<<endl;
        }
        else
        {
            cout<<"\n\n Usted no puede votar"<<endl<<endl;
        }
    system ("pause");
    return 0;
}


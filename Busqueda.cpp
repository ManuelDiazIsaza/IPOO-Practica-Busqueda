/*
  Archivo: Busqeuda.cpp
  Autor: Luis Yovany Romo Portilla
  Email: luis.romo@correounivalle.edu.co
  Fecha creación: 2017-08-31
  Fecha última modificación: 2017-08-31
  Versión: 0.1
  Licencia: GPL
*/

#include"Busqueda.h"
using namespace std;


Busqueda::Busqueda()
{
  // No hace nada
}


bool Busqueda::busquedaSecuencial(int vector[], int dato, int tamano)
{
    bool encontro = false;
    for(int i=0; i<tamano; i++)
    {
        if(vector[i] == dato){
            encontro =  true;
        }
    }
    return encontro;
}

bool Busqueda::busquedaBinaria(int vector[], int dato, int tamano)
{
    bool encontro = false;
    int finala=tamano-1;
    int inicio=0;
    while(inicio<finala)
    {
        int m=(int)(inicio+finala)/2;
        if(dato == vector[m])
        {
            encontro = true;
            finala = 0;
        }
        if(dato>vector[m])
        {
            inicio=m+1;
        }
        if(dato<vector[m])
        {
            finala=m-1;
        }
    }
    return encontro;
}



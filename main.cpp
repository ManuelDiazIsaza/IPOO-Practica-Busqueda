/*
  Archivo: Main.cpp
  Autor: Luis Yovany Romo Portilla
  Email: luis.romo@correounivalle.edu.co
  Fecha creaciC3n: 2017-08-11
  Fecha C:ltima modificaciC3n: 2017-08-31
  VersiC3n: 0.1
  Licencia: GPL
*/

//Utilidad: Métodos de ordenación
#include<stdlib.h>
#include<iostream>
#include "Ordenar.h"
#include "Busqueda.h"

using namespace std;



int main()
{
  int tamano = 6;
  //int vectorOriginal[tamano] = {7,3,12,7,23,4}; 
  int vectorOriginal[tamano] = {7,3,4,7,12,23};
  int vectorOrdenado[tamano];
  
  Ordenar ordenar;
  Busqueda buscar;
    
  ordenar.copiar(vectorOriginal, vectorOrdenado, tamano);
  //  ordenar.burbuja(vectorOrdenado, tamano);
  
  

  //ordenar.burbuja2(vectorOrdenado, tamano);*/


  //ordenar.seleccion(vectorOrdenado,tamano);*/

  
  ordenar.insercion(vectorOrdenado,tamano);


  cout << endl << "Original" << endl ;
  ordenar.imprimir(vectorOriginal, tamano);
  
  cout << endl << "Ordenado" << endl;
  ordenar.imprimir(vectorOrdenado, tamano);
  
  cout << ((buscar.busquedaSecuencial(vectorOriginal, 7, tamano) == 1 ) ? "Encontrado" : "No está") << endl;
  cout << ((buscar.busquedaBinaria(vectorOrdenado, 12, tamano) == 1 ) ? "Encontrado binario" : "No esta binario");
  cout << "Probando GutHub";

  return 0;
}
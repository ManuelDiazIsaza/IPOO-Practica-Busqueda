/*
  Archivo: Busquedar.h
  Autor: Luis Yovany Romo
  Email: luis.romo@correounivalle.edu.co
  Fecha creación: 2018-02-09
  Fecha Última modificación: 2018-02-09
  Versión: 0.1
  Licencia: GPL
*/

// Clase: Busqueda
// Responsabilidad: Efeectuar busquedad de información en un arreglo (Vector)
//    - Secuencial
//    - Binaria
// ColaboraciÃ³n: ninguna


#include<iostream>

#ifndef HH_Busqueda
#define HH_Busqueda


class Busqueda
{
  private:
    // No hay estado interno
    
  public:
    Busqueda(); // No hace nada
    
    bool busquedaSecuencial(int vector[], int dato, int tamano);
    bool busquedaBinaria(int vector[], int dato, int tamano);
    
};

#endif
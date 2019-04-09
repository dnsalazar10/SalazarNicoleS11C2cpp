/* Semana 11 Clase 2
Ejercicio: Cree un repositorio llamado ApellidoNombreS11C2cpp.
En este repositorio deben estar todos los codigos que debe entregar
al final de la clase. la entrega debe ser un directorio comprimido
ApellidoNombreS11C2cpp.zip que usted debe subir a sicua y el enlace
de GitHub con el repositorio correspondiente. */

/*programa 1: Haga un programa que reciba interactivamente dos
valores enteros y retorne los numero primos contenidos en el
intervalo delimitado por estos dos valores. llamelo primos.cpp*/

#include <iostream>

using namespace std;

//Variables globales para determinar el rango en el que se determinan los numero primos
int a=20;
int b=30;

int main()
{
    int cont, n, primo;
    for ( n = a ; n <= b ; n++ )
    {
        primo = 1;
        cont = 2;
        while ( cont<=n/2 && primo )
        {
            if ( n%cont == 0 ) //Saca el modulo y lo compara con el primo
                primo = 0;
            cont++;
        }
        if ( primo )
            printf( "%d ", n );
    }
    return 0;
}

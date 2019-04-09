/*# programa 2: Tome su programa que calcula el factorial de un
#numero n (y que recibe n interactivamente). Reescribalo usando
#funciones. La seccion de codigo que calcula el factorial debe
#ser una funcion independiente que es llamada desde la funcion main.
#llamelo factorial_interFUN.cpp*/
#include <iostream>

using namespace std;

//Función que retorna el factorial de un numero n
int factorial(int n) {
   if(n < 0) //Cuando el numero es 0
    return 0;
   else if(n > 1) //Cuando el numero es diferente de 0
    return n*factorial(n-1); //Saca el factorial de un un numero
    return 1;
}

int main() {
   printf( "%d ", factorial(3)); //Imprime numero de la función factorial
}

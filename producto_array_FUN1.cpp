/*# programa 3: Haga un programa que tenga dos funciones.
#Cada una debe recibir dos arreglos unidimensionales de 5 elementos
#cada uno. La primera funcion debe retornar el producto de los dos
#arreglos elemento a elemento. */
#include <iostream>

using namespace std;
int main()
{
	int u[]={1,2,3,4,5};
  int v[]={10,20,30,40,50};
	int producto[]={0};
	int total=0;

	int n = sizeof(u)/sizeof(*u); //Tamaño del arreglo u
  int m = sizeof(v)/sizeof(*v); //Tamaño del arreglo v

	if(n!=m)
	{
		cout<<"Los arreglos deben ser del mismo tamaño\n";
	}
	else{
		for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        producto[]=u[i]*v[j];
      }
    }
  }
  //Imprime el arreglo
  for (int l=0; l<4; l++){
    cout<<producto[l]<<"\n";

  }
}

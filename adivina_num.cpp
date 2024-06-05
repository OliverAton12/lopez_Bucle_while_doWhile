#include<iostream>
#include<time.h>
#include<cstdlib>

using namespace std;

int main()
{
   srand(time(NULL));

   int aleatorio = 1 + rand() % (50) ;
   cout<<endl<<"el numero generado es:" <<aleatorio;
   
   
   int num_usuario;
   cout<<endl<<"el numero generado es:";
   cin>>num_usuario;

    if(num_usuario < aleatorio)
      cout<<endl<<"Ingres el:" << aleatorio <<". debes ingresar uno mayor";
    else if(num_usuario> aleatorio)  
      cout<<endl<<"Ingres el:" << num_usuario <<". debes ingresar uno menor";
    else
    cout<<endl<<"FELICIDADES, GANASTE LA BELA EN LA PUCE ESMERAÑLDA  :) ";


    return 0;
}
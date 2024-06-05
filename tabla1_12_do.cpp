#include<iostream>
using namespace std;

int main()
{
  int tabla;
  cout<<endl<<"Ingresa la tabla que deseas: ";
  cin>>tabla;
  int k=12;
 do
 {
   cout<<endl<<tabla <<"x" << k << "=" << tabla*k;
    k--;
 } while (k >=1 );
 
  


    return 0;
}
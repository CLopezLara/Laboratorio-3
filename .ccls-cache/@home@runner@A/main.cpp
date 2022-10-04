#include "Lectura.hpp"


int Lectura:: _Resolucion=0;
int Lectura:: _Frecuencia=0;
 
 
int main(int argc, char** argv){
	
	int i, t;
  
  Lectura::captura();
  cout<< "Cuantos canales desea leer?"<<endl;
  cin>> t;
    Lectura l[t];
for(int i=0; i<t; i++){
		l[i].canales();
	}
	
	for(int i=0; i<t; i++){
		l[i].lectura();
	}
	for (int i=0;i<t;i++){
	  l[i].muestraDatos();
	
}
}
#include <iostream>
#include <stdlib.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Lectura{
	private:
		static int _Resolucion;
		static int _Frecuencia;
	  float _voltaje;
    float  _Res;
    string _Canal;
    
	public:
		
		Lectura();
		void muestraDatos();
		static void captura();
    void canales();
    
    void lectura();
		
};
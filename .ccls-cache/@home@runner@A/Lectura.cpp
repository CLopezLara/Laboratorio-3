#include "Lectura.hpp"
Lectura::Lectura(){
  _Canal="";
}
void Lectura::lectura(){
  do{
    cout<<"Dato de lectura (0-3.3 volts) canal:" <<_Canal<<endl;
    cin>>_voltaje;
    if(_voltaje<0 || _voltaje>3.3){
      cout<<"Fuera de los limites"<<endl;
    }
  } while (_voltaje<0 || _voltaje>3.3);
  if(_Resolucion == 8) _Res = (_voltaje*255)/3.3;
  else if(_Resolucion == 10) _Res = (_voltaje*1023)/3.3;
  else if(_Resolucion == 12) _Res = (_voltaje*4095)/3.3;
}

void Lectura::muestraDatos(){
	cout<<"Canal: "<<_Canal<<endl;
	cout<<"Dato convertido: "<<_Res<<endl;
}

void Lectura::captura(){
	cout<<endl<<"** Introduce Datos **"<<endl;
  do{
	  cout<<"Dame la resolucion en bits (8,10,12): "<<endl;
	  cin>> _Resolucion;
    if(_Resolucion!= 8 && _Resolucion!= 10 && _Resolucion!=12)
    {
      cout<< "Resolucion No valida"<<endl;
    }
  }while(_Resolucion!= 8 && _Resolucion!= 10 && _Resolucion!=12);
  
	cout<<"Dame la Frecuencia: "<<endl;
	cin>> _Frecuencia;

}

void Lectura::canales(){
  cout<< "Canales que se van a leeer (AN1-AN32)"<<endl;
  cin>> _Canal;
}
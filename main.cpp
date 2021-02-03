#include <iostream>
# include<fstream>
using namespace std;
void miarchivo();
void leer();
int main() {
  int elec;
  do{
  
  cout<<"1.Entrar al ejercicio"<<endl;
  cout<<"2.Lectura"<<endl;
  cout<<"3.Salida"<<endl;
  cin>>elec;
  switch(elec){
    case 1:
    cin.ignore();
    miarchivo();
    break;
    case 2:
    cin.ignore();
    leer();
    break;
    case 3:
    cout<<"Adios poliamigo"<<endl;
    default:
    break;
  }
  }while(elec!=3);
}
void miarchivo(){
  int d,niveles,i;
  string archivaso;
  char r;
  ofstream doc;
  cout<<"Ingrese el nombre del archivo"<<endl;
  getline(cin,archivaso);
  doc.open(archivaso.c_str(),ios::out);
  do{
  cout<<"Ingrese el numero de niveles"<<endl;
  cin>>niveles;
  do{
    if (niveles%2 == 0){
      for (i=niveles;i>0;i--)
      {
        doc << "* ";
      }
    }else{
      for (i=niveles;i>0;i--)
      {
        doc << "- ";
      }
    }
    doc << endl;
    niveles--;
  } while (niveles != 0);
  cout<<"Ingresara otra vez (s/n): "<<endl;
  cin>>r;
  }while(r=='s');
  doc.close();
}
void leer(){
  string niveles;
  string archivaso;
  char r;
  ifstream miarchivoleer;
  cout<<"Archivo a buscar:"<<endl;
  getline(cin,archivaso);
  miarchivoleer.open(archivaso,ios::in);
  
  if(miarchivoleer.fail()){
    cout<<"Archivo Warning"<<endl;
  }
  else
  {
   while(!miarchivoleer.eof()){
    getline(miarchivoleer,niveles);
    cout<<niveles<<endl;
    }
  }
  miarchivoleer.close();
}
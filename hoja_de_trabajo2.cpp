#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main(){

      int identificacion,identificacion2,opcion;
      float nota1,nota2,nota3,nota4,notaalta,notamedia,promedio;
      char nombre[30];
      ofstream Guardar;
      ifstream leer;
      Guardar.open("nota.txt",ios::app);
        while (true){
             
            
            
            cout<<"\n1 ingresar datos del estudiante"<<endl;
            cout<<"2 salir"<<endl;
            cin>>opcion;
            system ("CLS");
            switch(opcion){

            case 1 :{
            

                cout<<"ingrese nombre\t";
                cin>>nombre;
                cout<<"ingrese identificacion\t" ;
                cin>>identificacion;
                cout<<"ingrese nota 1 \t";
                cin>>nota1;
                cout<<"ingrese nota 2 \t";
                cin>>nota2;
                cout<<"ingrese nota 3 \t";
                cin>>nota3;
                cout<<"ingrese nota 4 \t";
                cin>>nota4;
                promedio=(nota1+nota2+nota3+nota4)/4;
                cout<<"el promedio es de :"<<promedio<<endl;
                cout<<"ingrese nota media del colegio\t";
                cin>>notamedia;
                
                if(promedio>=notamedia){
                	cout<<"el promedio de:\t"<<nombre<<"\tsupero la nota media del colegio"<<endl;
                }
                else if (promedio<=notamedia) {
                	cout<<"el promedio de:\t"<<nombre<<"\tno alcanzo la nota media del colegio"<<endl;
                }
                Guardar<<"\t\t\tDATOS DEL ESTUDIANTE"<<endl;
                Guardar<<"nombre:.... \t"<<nombre<<endl;
                Guardar<<"identificacion..."<<identificacion<<endl;
                Guardar<<"nota 1: \t"<<nota1<<endl;
                Guardar<<"nota 2: \t"<<nota2<<endl;
                Guardar<<"nota 3: \t"<<nota3<<endl;
                Guardar<<"nota 4: \t"<<nota4<<endl;
                Guardar<<"promedio:\t"<<promedio<<endl;
                 if(promedio>=notamedia){
                	Guardar<<"el promedio de:  "<<nombre<<"\t  supero la nota media del colegio  "<<endl;
                }
                 if (promedio<=notamedia){
                	Guardar<<"el promedio de:  "<<nombre<<"\t  NO ALCANZO la nota media del colegio  "<<endl;
                }
            case 2:
            	
			      {
			      	system("exit");
			      	break;
			      
			      }

           return 0;
  }

}
}
}
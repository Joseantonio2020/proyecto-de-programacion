/*el presidente de un club de futbol requiere calcular el sueldo de 
sus jugadores si se tiene como dato la edad y la nacionalidad del jugador

ademas se sabe que el sueldo se caculara de a siguiente manera
sueldo fijo $.2500.00
si es extranjero recibe un bono de $.500.00

si la edad esta entre 15 y 20, el salario incrementa en $.1400.00
si la edad esta entre 21 y 25, el salario incrementa en $.1500.00
si la edad esta entre 26 y 30, el salario incrementa en $.1200.00
si es mayor de 30, el salario incrementa en $.800.00
determine el sueldo del jugador si se tiene como datos la edad y nacionalidad

mostrar un reporte del total a pagar de planilla, asi como el total de jugadores 
por los rangos de edad. Ademas de indicar que rango de edad es el mas remunerado*/

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <string>


using namespace std;
int main(){
	char nom[30];
	int n;
	int n2;
	int salariofijo=2500;
	int extranjero=500;
	int edad;
	int nacion;
	
	 ofstream guardar;
	 ifstream leer;
	 guardar.open("club_futbol.txt",ios::app);
	 do{
	 system("CLS");
	cout<<"1.ingreso de datos"<<endl;
	cout<<"2.leer datos"<<endl;
	cin>>n2;
	
	
	switch(n2){
	case 1:{
	
	cout<<"ingrese nombre \n"; cin>>nom;
	cout<<"ingrese su edad "; cin>>edad;
	cout<<"ingrese opcion"<<endl;
	cout<<"1) Es nacional  -- o --  2) Es extranjero";cin>>nacion;
	
	
	//nacional
	if (edad==15 && nacion==1){
		
		cout<<"su salario es de: "<<salariofijo+1400;
		
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es nacional"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 15 a 20 es de 1400"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1400<<endl;
		 
	}
	
	if (edad==16 && nacion==1){
		
		cout<<"su salario es de: "<<salariofijo+1400;
		
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es nacional"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 15 a 20 es de 1400"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1400<<endl;
		
	}
	if (edad==17 && nacion==1){
		
		cout<<"su salario es de: "<<salariofijo+1400;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es nacional"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 15 a 20 es de 1400"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1400<<endl;
		
	}
	if (edad==18 && nacion==1){
		
		cout<<"su salario es de: "<<salariofijo+1400;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es nacional"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 15 a 20 es de 1400"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1400<<endl;
		
	}
	if (edad==19 && nacion==1){
		
		cout<<"su salario es de: "<<salariofijo+1400;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es nacional"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 15 a 20 es de 1400"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1400<<endl;
		
	}
	if (edad==20 && nacion==1){
		
		cout<<"su salario es de: "<<salariofijo+1400;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es nacional"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 15 a 20 es de 1400"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1400<<endl;
		
	}
	//extranjero
if (edad==15 && nacion==2){
		
		cout<<"su salario es de: "<<salariofijo+1400+500;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es extranjero"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 15 a 20 es de 1400"<<endl;
		guardar<<"bonificacion a extranjeros 500"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1400+500<<endl;
		
	}
	
	if (edad==16 && nacion==2){
		
		cout<<"su salario es de: "<<salariofijo+1400+500;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es extranjero"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 15 a 20 es de 1400"<<endl;
		guardar<<"bonificacion a extranjeros 500"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1400+500<<endl;
		
	}
	if (edad==17 && nacion==2){
		
		cout<<"su salario es de: "<<salariofijo+1400+500;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es extranjero"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 15 a 20 es de 1400"<<endl;
		guardar<<"bonificacion a extranjeros 500"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1400+500<<endl;
		
	}
	if (edad==18 && nacion==2){
		
		cout<<"su salario es de: "<<salariofijo+1400+500;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es extranjero"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 15 a 20 es de 1400"<<endl;
		guardar<<"bonificacion a extranjeros 500"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1400+500<<endl;
		
	}
	if (edad==19 && nacion==2){
		
		cout<<"su salario es de: "<<salariofijo+1400+500;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es extranjero"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 15 a 20 es de 1400"<<endl;
		guardar<<"bonificacion a extranjeros 500"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1400+500<<endl;
		
	}
	if (edad==20 && nacion==2){
		
		cout<<"su salario es de: "<<salariofijo+1400+500;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es extranjero"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 15 a 20 es de 1400"<<endl;
		guardar<<"bonificacion a extranjeros 500"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1400+500<<endl;
		
	}
	
	
	//nacional
	if (edad==21 && nacion==1){
		
		cout<<"su salario es de: "<<salariofijo+1500;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es nacional"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 21 a 25 es de 1500"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1500<<endl;
		
	}
	if (edad==22 && nacion==1){
		
		cout<<"su salario es de: "<<salariofijo+1500;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es nacional"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 21 a 25 es de 1500"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1500<<endl;
		
	}
	if (edad==23 && nacion==1){
		
		cout<<"su salario es de: "<<salariofijo+1500;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es nacional"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 21 a 25 es de 1500"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1500<<endl;
		
	}
	if (edad==24 && nacion==1){
		
		cout<<"su salario es de: "<<salariofijo+1500;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es nacional"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 21 a 25 es de 1500"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1500<<endl;
		
	}
	if (edad==25 && nacion==1){
		
		cout<<"su salario es de: "<<salariofijo+1500;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es nacional"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 21 a 25 es de 1500"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1500  <<endl;
		
	}

	//extranjero
	if (edad==21 && nacion==2){
		
		cout<<"su salario es de: "<<salariofijo+1500+500;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es extranjero"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 21 a 25 es de 1500"<<endl;
		guardar<<"bonificacion a extranjeros 500"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1500+500<<endl;
		
	}
	if (edad==22 && nacion==2){
		
		cout<<"su salario es de: "<<salariofijo+1500+500;
	 	guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;   
		guardar<<"nombre: "<<nom<<endl; 
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es extranjero"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 21 a 25 es de 1500"<<endl;
		guardar<<"bonificacion a extranjeros 500"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1500+500<<endl;
		
	}
	if (edad==23 && nacion==2){
		
		cout<<"su salario es de: "<<salariofijo+1500+500;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es extranjero"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 21 a 25 es de 1500"<<endl;
		guardar<<"bonificacion a extranjeros 500"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1500+500<<endl;
		
	}
	if (edad==24 && nacion==2){
		
		cout<<"su salario es de: "<<salariofijo+1500+500;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es extranjero"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 21 a 25 es de 1500"<<endl;
		guardar<<"bonificacion a extranjeros 500"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1500+500<<endl;
		
	}
	if (edad==25 && nacion==2){
		
		cout<<"su salario es de: "<<salariofijo+1500+500;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es extranjero"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 21 a 25 es de 1500"<<endl;
		guardar<<"bonificacion a extranjeros 500"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1500+500<<endl;
		
	}
	
	//nacional
	if (edad==26 && nacion==1){
		
		cout<<"su salario es de: "<<salariofijo+1200;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es nacional"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 26 a 30 es de 1200"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1200<<endl;
		
	}
	if (edad==27 && nacion==1){
		
		cout<<"su salario es de: "<<salariofijo+1200;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es nacional"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 26 a 30 es de 1200"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1200<<endl;
		
	}
	if (edad==28 && nacion==1){
		
		cout<<"su salario es de: "<<salariofijo+1200;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es nacional"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 26 a 30 es de 1200"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1200<<endl;
		
	}
	if (edad==29 && nacion==1){
		
		cout<<"su salario es de: "<<salariofijo+1200;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es nacional"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 26 a 30 es de 1200"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1200<<endl;
		
	}
	if (edad==30 && nacion==1){
		
		cout<<"su salario es de: "<<salariofijo+1200;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es nacional"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 26 a 30 es de 1200"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1200<<endl;
		
	}

	//extranjero
	if (edad==26 && nacion==2){
		
		cout<<"su salario es de: "<<salariofijo+1200+500;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es extranjero"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 26 a 30 es de 1200"<<endl;
		guardar<<"bonificacion a extranjeros 500"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1200+500<<endl;
		
	}
	if (edad==27 && nacion==2){
		
		cout<<"su salario es de: "<<salariofijo+1200+500;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es extranjero"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 26 a 30 es de 1200"<<endl;
		guardar<<"bonificacion a extranjeros 500"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1200+500<<endl;
		
	}
	if (edad==28 && nacion==2){
		
		cout<<"su salario es de: "<<salariofijo+1200+500;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es extranjero"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 26 a 30 es de 1200"<<endl;
		guardar<<"bonificacion a extranjeros 500"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1200+500<<endl;
		
	}
	if (edad==29 && nacion==2){
		
		cout<<"su salario es de: "<<salariofijo+1200+500;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es extranjero"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 26 a 30 es de 1200"<<endl;
		guardar<<"bonificacion a extranjeros 500"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1200+500<<endl;
		
	}
	if (edad==30 && nacion==2){
		
		cout<<"su salario es de: "<<salariofijo+1200+500;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
	    guardar<<"Es extranjero"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion rango de edad entre 26 a 30 es de 1200"<<endl;
		guardar<<"bonificacion a extranjeros 500"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+1200+500<<endl;
		
	}
	//nacional
	if (edad>30 && nacion==1){
		
		cout<<"su salario es de: "<<salariofijo+800;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es nacional"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion mayores de 30 es de 800"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+800<<endl;
		
	}
	//extranjero
	if (edad>30 && nacion==2){
		
		cout<<"su salario es de: "<<salariofijo+800+500;
		guardar<<"\t\t\t---DATOS DE LOS JUGADORES---"<<endl;	
		guardar<<"nombre: "<<nom<<endl;
		guardar<<"edad: "<<edad<<endl;
		guardar<<"Es extranjero"<<endl;
		guardar<<"su salario es de: Q>"<<salariofijo<<endl;
		guardar<<"bonificacion mayores de 30 es de 800"<<endl;
		guardar<<"bonificacion a extranjeros 500"<<endl;
		guardar<<"total a recibir: Q>"<<salariofijo+800+500<<endl;
		
	} 
     	guardar.close();
       break;
}
 
 case 2:{
 	
 	    
 	   	leer.open("club_futbo.txt",ios::in);
				leer>>nom;
				while(!leer.eof()){
					leer>>edad;
					cout<<"nombre"<<nom<<endl;
					cout<<"edad "<<edad<<endl;
					cout<<"salario fijo Q."<<salariofijo<<endl;
			        cout<<endl; 
					leer>>nom;
					system("PAUSE");	
				}
				leer.close(); 	    
       break;
    }
  }cout<<"\n1. regresar al menu 2.salir";
	cin>>n;
 }
    while(n==1);
    system("PAUSE");
	
	return 0;
	
}
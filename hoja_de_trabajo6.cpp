#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;
int menu(){
	int x;
	system("cls");
	cout<<"<<---------bienvenido-------->>"<<endl;
	cout<<"1.  realizar compra"<<endl;
	cout<<"2.  ver registros"<<endl;
	cout<<"3.  buscar registros"<<endl;
	cout<<"4.  modificar registro"<<endl;
	cout<<"5.  eliminar registro"<<endl;
	cout<<"6.  salir"<<endl;
	cin>>x;
	return x;
}

void agregar(ofstream &es){
	system("cls");
	int dia;
	int modelo;
	int cant;
	int total;
	es.open("model.txt",ios::out | ios::app);
	cout<<"ingrese Dia del mes"<<endl;
	cin>>dia;
    cout<<"seleccione modelo"<<endl;
	cout<<"modelo#1---Q10."<<endl;
	cout<<"modelo#2---Q15."<<endl;
	cout<<"modelo#3---Q18.50."<<endl;
	cout<<"modelo#4---Q25."<<endl;
	cin>>modelo;
	if(modelo==1){
	   cout<<"digite cantidad: "<<endl;
	   cin>>cant;
	   total=cant*10;
	   cout<<"total a pagar: Q"<<total<<endl;
    }
    if(modelo==2){
	   cout<<"digite cantidad: "<<endl;
	   cin>>cant;
	   total=cant*15;
   	   cout<<"total a pagar: Q"<<total<<endl;
    }
    if(modelo==3){
	   cout<<"digite cantidad: "<<endl;
	   cin>>cant;
	   total=cant*18.5;
	   cout<<"total a pagar: Q"<<total<<endl;
    }
    if(modelo==4){
	   cout<<"digite cantidad: "<<endl;
       cin>>cant;
	   total=cant*25;
	   cout<<"total a pagar: Q"<<total<<endl;
    } 
	   	    	
  
	es<<dia<<" "<<modelo<<" "<<cant<<" "<<total<<" \n";
	es.close();
}
void ver_registros(ifstream &lec){
	system("cls");
	int dia;
	int modelo;
	int cant;
	int total;
	lec.open("model.txt",ios::in);
	if(lec.is_open()){
	   cout<<"-----registros------"<<endl;
	   lec>>dia;
	 while(!lec.eof()){
		lec>>modelo;
		lec>>cant;
		lec>>total;
		cout<<"dia----------: "<<dia<<endl;
		cout<<"modelo-------: "<<modelo<<endl;
		cout<<"cantidad-----: "<<cant<<endl;
		cout<<"total-------: "<<total<<endl;
		cout<<"--------------------- "<<endl;
		lec>>dia;
	}
	lec.close();
	}else{
		cout<<"ERROR"<<endl; 
	}
	system("pause");
	
}

void buscar_registros(ifstream &lec){
	system("cls");
	lec.open("model.txt",ios::in);
	int dia,diaux,modelo,cant,total;
	bool encontrado = false;
	cout<<"digite la dia: ";
	cin>>diaux;
	lec>>dia;
	while(!lec.eof() && !encontrado){
		lec>>modelo;
		lec>>cant;
		lec>>total;
		if(dia == diaux){	
		cout<<"dia----------: "<<dia<<endl;
		cout<<"modelo-------: "<<modelo<<endl;
		cout<<"cantidad-----: "<<cant<<endl;
		cout<<"total-------: Q"<<total<<endl;
		cout<<"--------------------- "<<endl;
		encontrado = true;
		system("pause");	
		}
		lec>>dia;
	}
	lec.close();
	if(!encontrado){
		cout<<"dato no encontrado"<<endl;
		system("pause");
	}
}

void modificar(ifstream &lec){
	
	system("cls");
	int dia;
	int modelo;
	int cant;
	int total;
	int diaux;
	int modeloaux;
	int cantaux;
	int totalaux;
	lec.open("model.txt",ios::in);
	ofstream aux("auxiliar.txt",ios::out);
	if(lec.is_open()){
		cout<<"dia: ";
		cin>>diaux;
		cout<<"modelo: ";
		cin>>modeloaux;
		lec>>dia;
		while(!lec.eof()){
		lec>>modelo;
		lec>>cant;
		lec>>total;
			if(dia == diaux && modelo == modeloaux){
				cout<<"nuevo dia: ";
				cin>>diaux;
				cout<<"nuevo modelo: ";
				cin>>modeloaux;
				   if(modeloaux==1){
	                  cout<<"digite cantidad: "<<endl;
	                  cin>>cant;
	                  total=cant*10;
	                  cout<<"total a pagar: Q"<<total<<endl;
                   }
                   if(modeloaux==2){
	                  cout<<"digite cantidad: "<<endl;
	                  cin>>cant;
	                  total=cant*15;
   	                  cout<<"total a pagar: Q"<<total<<endl;
                   }
                   if(modeloaux==3){
	                  cout<<"digite cantidad: "<<endl;
	                  cin>>cant;
	                  total=cant*18.5;
	                  cout<<"total a pagar: Q"<<total<<endl;
                   }
                   if(modeloaux==4){
	                  cout<<"digite cantidad: "<<endl;
                      cin>>cant;
	                  total=cant*25;
	                  cout<<"total a pagar: Q"<<total<<endl;
                   } 
				aux<<diaux<<" "<<modeloaux<<" "<<cant<<" "<<total<<"\n"; 
			}else{
			    aux<<dia<<" "<<modelo<<" "<<cant<<" "<<total<<"\n";	
			}
			lec>>dia;
		}
		lec.close();
		aux.close();	
	}else{
		cout<<"ERROR"<<endl;
	}
		remove("model.txt");
		rename("auxiliar.txt","model.txt");
	
}
void eliminar(ifstream &lec){
		system("cls");
	int dia;
	int modelo;
	int cant;
	int total;
	int  diaux;
	lec.open("model.txt",ios::in);
	ofstream aux("auxiliar.txt",ios::out);
	if(lec.is_open()){
		cout<<"dia: ";
		cin>>diaux;
		lec>>dia;
		while(!lec.eof()){
			lec>>modelo;
			lec>>cant;
			lec>>total;
			if(dia == diaux){
				cout<<"eliminado  ";
				system("pause"); 
			}else{
			    aux<<dia<<" "<<modelo<<" "<<cant<<" "<<total<<"\n";	
			}
			lec>>dia;
		}
		lec.close();
		aux.close();	
	}else{
		cout<<"ERROR"<<endl;
		system("pause");
	}
		remove("model.txt");
		rename("auxiliar.txt","model.txt");
	
	
}
int main(){
	ofstream esc;
	ifstream lec;
	int op;
	do{
		system("cls");
	    op=menu();
		switch(op){
			 case 1:{
			 	agregar(esc);
			 	break;
			 }
			 case 2: {	
			 	ver_registros(lec);
			 	break;
			 }
			 case 3:{
			 	buscar_registros(lec);
			 	break;
			 }
			 case 4:{
			 	modificar(lec);
			 	break;
			 }
			 case 5:{
			 	eliminar(lec);
			 	break;
			 }
			
			
		}	
	}while(op!=6);
	
	return 0;
}  
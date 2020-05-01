#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <conio.h>

using namespace std;

int main(){
	
	int menu,menu2;
	int a=10;
	int b=20;
	int c=30;
	int d=50;
	float precio,descuento,descuento2,descuento3,hectareas;
	ofstream guardar;
	guardar.open("xterminios_S,A.txt",ios::app);
	
	do{
		system("CLS");
		cout<<" tipo--servicio-----costo x hectarea"<<endl;
		cout<<" 1.    MALA HIERVA    Q.10"<<endl;
		cout<<" 2.    LANGOSTAS      Q.20"<<endl;
		cout<<" 3.    GUSANOS        Q.30"<<endl;
		cout<<" 4.    TODAS          Q.50"<<endl;
		cout<<" 5.    SALIR  "<<endl;
		cin>>menu;
		switch(menu){
			
		 case 1:{
			
			cout<<"ingrese la cantidad de hectareas a fumigar "<<endl;
			cin>>hectareas;
			
			if(hectareas<500){
				cout<<"el pago inicial es de : Q."<<hectareas*a<<endl;
				
				guardar<<"\t\t\t\tMALA HIERVA"<<endl;
				guardar<<"cantidad de hectareas a fumigar\t"<<hectareas<<endl;
				guardar<<"total a pagar es de: Q."<<hectareas*a<<endl;
				
				if(hectareas*a>=1500){
					descuento=hectareas*a*0.10;
					cout<<"su descuento por gastar  Q1500 o mas es de: Q."<<descuento<<endl;
					cout<<"total a pagar: Q."<<hectareas*a-descuento<<endl;
					
				guardar<<"\t\t\t\tMALA HIERVA"<<endl;
				guardar<<"cantidad de hectareas a fumigar\t"<<hectareas<<endl;
				guardar<<"total a pagar es de: Q."<<hectareas*a<<endl;	
				guardar<<"su descuento por gastar  Q1500 o mas es de: Q."<<descuento<<endl;
				guardar<<"total a pagar: Q."<<hectareas*a-descuento<<endl;
									
				}
			}
			    if(hectareas>=500){
				   cout<<"el pago inicial es de: Q."<<hectareas*a<<endl;
				   descuento=hectareas*a*0.05;
				   descuento2=hectareas*a*0.10;
				   cout<<"su descuento por fumigar mas de 500 hectareas es de: Q."<<descuento<<endl;
				   cout<<"su descuento por gastar  Q1500 o mas es de: Q."<<descuento2<<endl;
				   descuento3=descuento+descuento2; 
				   cout<<"total a pagar : Q."<<hectareas*a-descuento3<<endl;
				   
				   	guardar<<"\t\t\t\tMALA HIERVA"<<endl;
			     	guardar<<"cantidad de hectareas a fumigar\t"<<hectareas<<endl;
			     	guardar<<"total a pagar es de: Q."<<hectareas*a<<endl;
				    guardar<<"descuento por fumigar mas de 500 hectareas es de: Q."<<descuento<<endl;
				    guardar<<"su descuento por gastar  Q1500 o mas es de: Q."<<descuento2<<endl;
				    guardar<<"total a pagar : Q."<<hectareas*a-descuento3<<endl;
				}

			break;
		 }
		case 2:{
			
			cout<<"ingrese la cantidad de hectareas a fumigar "<<endl;
			cin>>hectareas;
			
			if(hectareas<500){
				cout<<"el pago inicial es de : Q."<<hectareas*b<<endl;
				
				guardar<<"\t\t\t\tLANGOSTAS"<<endl;
				guardar<<"cantidad de hectareas a fumigar\t"<<hectareas<<endl;
				guardar<<"total a pagar es de: Q."<<hectareas*b<<endl;
				
				if(hectareas*b>=1500){
					descuento=hectareas*b*0.10;
					cout<<"su descuento por gastar  Q1500 o mas es de: Q."<<descuento<<endl;
					cout<<"total a pagar: Q."<<hectareas*b-descuento<<endl;
					
					guardar<<"\t\t\t\tLANGOSTAS"<<endl;
				    guardar<<"cantidad de hectareas a fumigar\t"<<hectareas<<endl;
				    guardar<<"total a pagar es de: Q."<<hectareas*b<<endl;
					guardar<<"su descuento por gastar  Q1500 o mas es de: Q."<<descuento<<endl;
			     	guardar<<"total a pagar: Q."<<hectareas*b-descuento<<endl;
				}
			}
			    if(hectareas>=500){
				   cout<<"el pago inicial es de: Q."<<hectareas*b<<endl;
				   descuento=hectareas*b*0.05;
				   descuento2=hectareas*b*0.10;
				   cout<<"su descuento por fumigar mas de 500 hectareas es de: Q."<<descuento<<endl;
				   cout<<"su descuento por gastar  Q1500 o mas es de: Q."<<descuento2<<endl;
				   descuento3=descuento+descuento2; 
				   cout<<"total a pagar : Q."<<hectareas*b-descuento3<<endl;
				   
				   guardar<<"\t\t\t\tLANGOSTAS"<<endl;
			       guardar<<"cantidad de hectareas a fumigar\t"<<hectareas<<endl;
				   guardar<<"total a pagar es de: Q."<<hectareas*b<<endl;
				   guardar<<"descuento por fumigar mas de 500 hectareas es de: Q."<<descuento<<endl;
				   guardar<<"su descuento por gastar  Q1500 o mas es de: Q."<<descuento2<<endl;
				   guardar<<"total a pagar : Q."<<hectareas*b-descuento3<<endl;
				}

			break;
		 } 
		 case 3:{
			
			cout<<"ingrese la cantidad de hectareas a fumigar "<<endl;
			cin>>hectareas;
			
			if(hectareas<500){
				cout<<"el pago inicial es de : Q."<<hectareas*c<<endl;
				
				guardar<<"\t\t\t\tGUSANOS"<<endl;
				guardar<<"cantidad de hectareas a fumigar\t"<<hectareas<<endl;
				guardar<<"total a pagar es de: Q."<<hectareas*c<<endl;
				
				if(hectareas*c>=1500){
					descuento=hectareas*c*0.10;
					cout<<"su descuento por gastar  Q1500 o mas es de: Q."<<descuento<<endl;
					cout<<"total a pagar: Q."<<hectareas*c-descuento<<endl;
					
					guardar<<"\t\t\t\tGUSANOS"<<endl;
			    	guardar<<"cantidad de hectareas a fumigar\t"<<hectareas<<endl;
				    guardar<<"total a pagar es de: Q."<<hectareas*c<<endl;
					guardar<<"su descuento por gastar  Q1500 o mas es de: Q."<<descuento<<endl;
			     	guardar<<"total a pagar: Q."<<hectareas*c-descuento<<endl;
				}
			}
			    if(hectareas>=500){
				   cout<<"el pago inicial es de: Q."<<hectareas*c<<endl;
				   descuento=hectareas*c*0.05;
				   descuento2=hectareas*c*0.10;
				   cout<<"su descuento por fumigar mas de 500 hectareas es de: Q."<<descuento<<endl;
				   cout<<"su descuento por gastar  Q1500 o mas es de: Q."<<descuento2<<endl;
				   descuento3=descuento+descuento2; 
				   cout<<"total a pagar : Q."<<hectareas*c-descuento3<<endl;
				   
				   guardar<<"\t\t\t\tGUSANOS"<<endl;
				   guardar<<"cantidad de hectareas a fumigar\t"<<hectareas<<endl;
				   guardar<<"total a pagar es de: Q."<<hectareas*c<<endl;
				   guardar<<"descuento por fumigar mas de 500 hectareas es de: Q."<<descuento<<endl;
				   guardar<<"su descuento por gastar  Q1500 o mas es de: Q."<<descuento2<<endl;
				   guardar<<"total a pagar : Q."<<hectareas*c-descuento3<<endl;
				}

			break;
		 }
		 case 4:{
			
			cout<<"ingrese la cantidad de hectareas a fumigar "<<endl;
			cin>>hectareas;
			
			if(hectareas<500){
				cout<<"el pago inicial es de : Q."<<hectareas*d<<endl;
				
				guardar<<"\t\t\t\tTODAS LAS PLAGAS"<<endl;
				guardar<<"cantidad de hectareas a fumigar\t"<<hectareas<<endl;
				guardar<<"total a pagar es de: Q."<<hectareas*c<<endl;
				
				if(hectareas*d>=1500){
					descuento=hectareas*d*0.10;
					cout<<"su descuento por gastar  Q1500 o mas es de: Q."<<descuento<<endl;
					cout<<"total a pagar: Q."<<hectareas*d-descuento<<endl;
					
					guardar<<"\t\t\t\tTODAS LAS PLAGAS"<<endl;
				    guardar<<"cantidad de hectareas a fumigar\t"<<hectareas<<endl;
				    guardar<<"total a pagar es de: Q."<<hectareas*c<<endl;
					guardar<<"su descuento por gastar  Q1500 o mas es de: Q."<<descuento<<endl;
			     	guardar<<"total a pagar: Q."<<hectareas*d-descuento<<endl;
				}
			}
			    if(hectareas>=500){
				   cout<<"el pago inicial es de: Q."<<hectareas*d<<endl;
				   descuento=hectareas*d*0.05;
				   descuento2=hectareas*d*0.10;
				   cout<<"su descuento por fumigar mas de 500 hectareas es de: Q."<<descuento<<endl;
				   cout<<"su descuento por gastar  Q1500 o mas es de: Q."<<descuento2<<endl;
				   descuento3=descuento+descuento2; 
				   cout<<"total a pagar : Q."<<hectareas*d-descuento3<<endl;
				   
				   guardar<<"\t\t\t\tTODAS LAS PLAGAS"<<endl;
				   guardar<<"cantidad de hectareas a fumigar\t"<<hectareas<<endl;
				   guardar<<"total a pagar es de: Q."<<hectareas*c<<endl;
				   guardar<<"descuento por fumigar mas de 500 hectareas es de: Q."<<descuento<<endl;
				   guardar<<"su descuento por gastar  Q1500 o mas es de: Q."<<descuento2<<endl;
				   guardar<<"total a pagar : Q."<<hectareas*d-descuento3<<endl;
				}

			break;
		 }
				
		 case 5: break;
		 default : cout<<"el numero ingresado no se encuentra en el menu"<<endl;	
				
		}
		cout<<"\n1. menu 2. salir"<<endl;
		cin>>menu2;	
	}while(menu2==1);
	system("PAUSE");
	
}
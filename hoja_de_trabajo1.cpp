#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <sstream>
#include <fstream>
using namespace std;

struct almacenes{
     char mes[10];
     int cod;
	 float ventas;	
}alm[10];

int main(){
	
	int n_almacenes,ventaM=0,ventam=0,media,sumat=0,ventamayor,ventamenor;
	float mayor=0,menor=9999999;
	ofstream es;
	
	cout<<"digite el numero de almacenes: ";
	cin>>n_almacenes;
	
	es.open("almacenes.txt",ios::app);
	for(int i=0;i<n_almacenes;i++){
		fflush(stdin);
		cout<<i+1<<". mes: ";
		cin.getline(alm[i].mes,10,'\n');
		cout<<"codigo de almacen: "<<endl;
		cin>>alm[i].cod;
		cout<<i+1<<". cantidad vendida: Q.";
		cin>>alm[i].ventas;
		
		sumat+=alm[i].ventas;
	    media=sumat/n_almacenes;
	
	
	   if(alm[i].ventas>ventamayor){
			ventamayor=alm[i].ventas;
		    ventaM=i;
	   }
	  	
		 if(alm[i].ventas<ventamenor){
			ventamenor=alm[i].ventas;
			ventam=i;	
		}
		  
		cout<<"\n";	
	    }
	
	      cout<<"\npromedio general: Q."<<media<<endl;
	     
	     cout<<"\ndatos del almacen con mayor ventas.\n";
	     cout<<"mes: "<<alm[ventaM].mes<<endl;
	     cout<<"codigo: "<<alm[ventaM].cod<<endl;
	     cout<<"ventas: Q."<<alm[ventaM].ventas<<endl;
	 
	 
	     cout<<"\ndatos del almacen con menor ventas.\n";
	     cout<<"mes: "<<alm[ventam].mes<<endl;
	     cout<<"codigo: "<<alm[ventam].cod<<endl;
	     cout<<"ventas: Q."<<alm[ventam].ventas<<endl;
	      
	      es<<"promedio general: Q."<<media<<endl;
		  es<<"mes con mayor venta: "<<alm[ventaM].mes<<"\tcodigo de almacen: "<<alm[ventaM].cod<<"\ttotal: Q."<<alm[ventaM].ventas<<endl;
		  es<<"mes con menor venta: "<<alm[ventam].mes<<"\tcodigo de almacen: "<<alm[ventam].cod<<"\ttotal: Q."<<alm[ventam].ventas<<endl;
	
	getch ();
	return 0;
}
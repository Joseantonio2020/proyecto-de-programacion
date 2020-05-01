/*una persona desea comprar entradas para un concierto que se realizara en la explanada
de cierto lugar de la ciudad. el precio de las entradas varia segun la zona elegida, asi 
tenemos que la lista de precios es la siguiente:

                zona        identificacion        precio
                VIP           V                   350.00                   
                plateaa       P                   130.00  
                Popular       E                   50.00

adicionalmente los precios tendran un descuento en funcion del numero de entradas que se compran
asi como si la persona que las adquiere es socio o no.
----DESCUENTO POR EL NUMERO DE ENTRADAS---        -----DESCUENTO POR SER SOCIO---
NUMERO DE ENTRADAS   %de descuento                  es socio?      %de decuento
entre 3 y 6             5%                           SI              8%
entre 7 y 9             7.75%                        No              0%
    >9                  10%                                                   */
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(){
	int cant,socio,precio;
	float des1,des2,des3;
	int menu;
	
	ofstream guardar;
	guardar.open("venta_entradas.txt",ios::app);
	
	do{
		system("CLS");
		cout<<"venta de entradas ingrese opcion "<<endl;
		cout<<"    zona----identificacion-----precio"<<endl;
		cout<<" 1. VIP          V             Q.350"<<endl;
		cout<<" 2. platea       P             Q.130"<<endl;
		cout<<" 3. popular      E             Q.50"<<endl;
		cout<<" 4. salir"<<endl;
		cin>>menu;
		
		switch (menu){
			case 1:{
				cout<<"ingrese cantidad de entradas que comprara: "<<endl;
				cin>>cant;
				cout<<"usted es socio? 1. Si 2.no "<<endl;
				cin>>socio;
				if(cant<3 && socio==1){
					precio=cant*350;
					des1=cant*350*0.08;
					cout<<" el pago principal es  de: Q."<<precio<<endl;
					cout<<" descuento por ser socio: Q."<<des1<<endl;
					cout<<"tota a pagar: Q."<<precio-des1<<endl;
					  guardar<<"\n----VIP----"<<endl;
					  guardar<<"cantidad de entradas: "<<cant<<endl;
					  guardar<<"pago principal: Q."<<precio<<endl;
					  guardar<<"descuento por ser socio: Q."<<des1<<endl;
					  guardar<<"total a pagar: Q."<<precio-des1<<endl;
				} 
				     if(cant>2 && cant<7 && socio==1){
				     	precio=cant*350;
				     	des1=cant*350*0.05;
				     	des2=cant*350*0.08;
				     	cout<<"pago principal: Q."<<precio<<endl;
				     	cout<<"descuento por la compra de 3 a 6 entradas: Q."<<des1<<endl;
				     	cout<<"descuento por ser socio: Q."<<des2<<endl;
						cout<<"total a pagar: Q."<<precio-des1-des2<<endl;
						  guardar<<"\n----VIP----"<<endl;
						  guardar<<"cantidad de entradas: "<<cant<<endl;
					      guardar<<"pago principal: Q."<<precio<<endl;
					      guardar<<"descuento por la compra de 3 a 6 entradas: Q."<<des1<<endl;
					      guardar<<"descuento por ser socio: Q."<<des2<<endl;
					      guardar<<"total a pagar: Q."<<precio-des1-des2<<endl;	
				     }
				       if(cant>6 && cant<10 && socio==1){
				       	precio=cant*350;
				       	des1=cant*350*0.075;
				       	des2=cant*350*0.08;
				       	cout<<"pago principal Q."<<precio<<endl;
				       	cout<<"descuento por la compra de 7 a 9 entradas: Q."<<des1<<endl;
				       	cout<<"descuento por ser socio: Q."<<des2<<endl;
				       	cout<<" total a pagar: Q."<<precio-des1-des2<<endl;
				       	  guardar<<"\n----VIP----"<<endl;
				       	  guardar<<"cantidad de entradas: "<<cant<<endl;
					      guardar<<"pago principal: Q."<<precio<<endl;
					      guardar<<"descuento por la compra de 7 a 9 entradas: Q."<<des1<<endl;
					      guardar<<"descuento por ser socio: Q."<<des2<<endl;
					      guardar<<"total a pagar: Q."<<precio-des1-des2<<endl;	
				       }
				          if(cant>9  && socio==1){
				       	    precio=cant*350;
				       	    des1=cant*350*0.10;
				       	    des2=cant*350*0.08;
				       	    cout<<"pago principal Q."<<precio<<endl;
				       	    cout<<"descuento por la compra de mas de  9 entradas: Q."<<des1<<endl;
				       	    cout<<"descuento por ser socio: Q."<<des2<<endl;
				       	    cout<<" total a pagar: Q."<<precio-des1-des2<<endl;
				       	      guardar<<"\n----VIP----"<<endl;
				       	      guardar<<"cantidad de entradas: "<<cant<<endl;
					          guardar<<"pago principal: Q."<<precio<<endl;
					          guardar<<"descuento por la compra de mas de 9 entradas: Q."<<des1<<endl;
					          guardar<<"descuento por ser socio: Q."<<des2<<endl;
					          guardar<<"total a pagar: Q."<<precio-des1-des2<<endl;	
				       }
				       	if(cant<3 && socio==2){
				        	precio=cant*350;
				        	cout<<" el pago principal es  de: Q."<<precio<<endl;
				        	cout<<" NO ES SOCIO"<<endl;
					        cout<<"tota a pagar: Q."<<precio<<endl;
					          guardar<<"\n----VIP----"<<endl;
					          guardar<<"cantidad de entradas: "<<cant<<endl;
					          guardar<<"pago principal: Q."<<precio<<endl;
					          guardar<<"NO ES SOCIO"<<endl;
					          guardar<<"total a pagar: Q."<<precio<<endl;
				           } 
				     if(cant>2 && cant<7 && socio==2){
				     	precio=cant*350;
				     	des1=cant*350*0.05;
				     	cout<<" NO ES SOCIO"<<endl;
				     	cout<<"pago principal: Q."<<precio<<endl;
				     	cout<<"descuento por la compra de 3 a 6 entradas: Q."<<des1;
						cout<<"total a pagar: Q."<<precio-des1<<endl;
						  guardar<<"\n----VIP----"<<endl;
						  guardar<<"cantidad de entradas: "<<cant<<endl;
					      guardar<<"pago principal: Q."<<precio<<endl;
					      guardar<<"descuento por la compra de 3 a 6 entradas: Q."<<des1;
					      guardar<<"NO ES SOCIO"<<endl;
					      guardar<<"total a pagar: Q."<<precio-des1<<endl;	
				     }
				       if(cant>6 && cant<10 && socio==2){
				       	precio=cant*350;
				       	des1=cant*350*0.075;
				       	cout<<" NO ES SOCIO"<<endl;
				       	cout<<"pago principal Q."<<precio<<endl;
				       	cout<<"descuento por la compra de 7 a 9 entradas: Q."<<des1<<endl;
				       	cout<<" total a pagar: Q."<<precio-des1<<endl;
				       	  guardar<<"\n----VIP----"<<endl;
				       	  guardar<<"cantidad de entradas: "<<cant<<endl;
					      guardar<<"pago principal: Q."<<precio<<endl;
					      guardar<<"descuento por la compra de 7 a 9 entradas: Q."<<des1<<endl;
					      guardar<<"NO ES SOCIO"<<endl;
					      guardar<<"total a pagar: Q."<<precio-des1<<endl;
				       }
				       if(cant>9  && socio==2){
				       	    precio=cant*350;
				       	    des1=cant*350*0.10;
				       	    cout<<" NO ES SOCIO"<<endl;
				       	    cout<<"pago principal Q."<<precio<<endl;
				       	    cout<<"descuento por la compra de mas de  9 entradas: Q."<<des1<<endl;
				       	    cout<<" total a pagar: Q."<<precio-des1-des2<<endl;
				       	      guardar<<"\n----VIP----"<<endl;
				       	      guardar<<"cantidad de entradas: "<<cant<<endl;
					          guardar<<"pago principal: Q."<<precio<<endl;
					          guardar<<"descuento por la compra de mas de 9 entradas: Q."<<des1<<endl;
					          guardar<<"NO ES SOCIO"<<endl;
					          guardar<<"total a pagar: Q."<<precio-des1<<endl;	
				       }
				break;
			}
			case 2:{
				cout<<"ingrese cantidad de entradas que comprara: "<<endl;
				cin>>cant;
				cout<<"usted es socio? 1. Si 2.no "<<endl;
				cin>>socio;
				if(cant<3 && socio==1){
					precio=cant*130;
					des1=cant*130*0.08;
					cout<<" el pago principal es  de: Q."<<precio<<endl;
					cout<<" descuento por ser socio: Q."<<des1<<endl;
					cout<<"tota a pagar: Q."<<precio-des1<<endl;
					  guardar<<"\n----PLATEA----"<<endl;
					  guardar<<"cantidad de entradas: "<<cant<<endl;
					  guardar<<"pago principal: Q."<<precio<<endl;
					  guardar<<"descuento por ser socio: Q."<<des1<<endl;
					  guardar<<"total a pagar: Q."<<precio-des1<<endl;
				} 
				     if(cant>2 && cant<7 && socio==1){
				     	precio=cant*130;
				     	des1=cant*130*0.05;
				     	des2=cant*130*0.08;
				     	cout<<"pago principal: Q."<<precio<<endl;
				     	cout<<"descuento por la compra de 3 a 6 entradas: Q."<<des1<<endl;
				     	cout<<"descuento por ser socio: Q."<<des2<<endl;
						cout<<"total a pagar: Q."<<precio-des1-des2<<endl;
						  guardar<<"\n----PLATEA----"<<endl;
						  guardar<<"cantidad de entradas: "<<cant<<endl;
					      guardar<<"pago principal: Q."<<precio<<endl;
					      guardar<<"descuento por la compra de 3 a 6 entradas: Q."<<des1<<endl;
					      guardar<<"descuento por ser socio: Q."<<des2<<endl;
					      guardar<<"total a pagar: Q."<<precio-des1-des2<<endl;		
				     }
				       if(cant>6 && cant<10 && socio==1){
				       	precio=cant*130;
				       	des1=cant*130*0.075;
				       	des2=cant*130*0.08;
				       	cout<<"pago principal Q."<<precio<<endl;
				       	cout<<"descuento por la compra de 7 a 9 entradas: Q."<<des1<<endl;
				       	cout<<"descuento por ser socio: Q."<<des2<<endl;
				       	cout<<" total a pagar: Q."<<precio-des1-des2<<endl;
				       	  guardar<<"\n----PLATEA----"<<endl;
				       	  guardar<<"cantidad de entradas: "<<cant<<endl;
					      guardar<<"pago principal: Q."<<precio<<endl;
					      guardar<<"descuento por la compra de 7 a 9 entradas: Q."<<des1<<endl;
					      guardar<<"descuento por ser socio: Q."<<des2<<endl;
					      guardar<<"total a pagar: Q."<<precio-des1-des2<<endl;	
				       }
				       if(cant>9  && socio==1){
				       	    precio=cant*130;
				       	    des1=cant*130*0.10;
				       	    des2=cant*130*0.08;
				       	    cout<<"pago principal Q."<<precio<<endl;
				       	    cout<<"descuento por la compra de mas de  9 entradas: Q."<<des1<<endl;
				       	    cout<<"descuento por ser socio: Q."<<des2<<endl;
				       	    cout<<" total a pagar: Q."<<precio-des1-des2<<endl;
				       	      guardar<<"\n----PLATEA----"<<endl;
				       	      guardar<<"cantidad de entradas: "<<cant<<endl;
					          guardar<<"pago principal: Q."<<precio<<endl;
					          guardar<<"descuento por la compra de mas de 9 entradas: Q."<<des1<<endl;
					          guardar<<"descuento por ser socio: Q."<<des2<<endl;
					          guardar<<"total a pagar: Q."<<precio-des1-des2<<endl;	
				       }
				       	if(cant<3 && socio==2){
				        	precio=cant*130;
				        	cout<<" el pago principal es  de: Q."<<precio<<endl;
				        	cout<<" NO ES SOCIO"<<endl;
					        cout<<"tota a pagar: Q."<<precio<<endl;
					          guardar<<"\n----PLATEA----"<<endl;
					          guardar<<"cantidad de entradas: "<<cant<<endl;
					          guardar<<"pago principal: Q."<<precio<<endl;
					          guardar<<"NO ES SOCIO"<<endl;
					          guardar<<"total a pagar: Q."<<precio-des1<<endl;
				           } 
				     if(cant>2 && cant<7 && socio==2){
				     	precio=cant*130;
				     	des1=cant*130*0.05;
				     	cout<<" NO ES SOCIO"<<endl;
				     	cout<<"pago principal: Q."<<precio<<endl;
				     	cout<<"descuento por la compra de 3 a 6 entradas: Q."<<des1<<endl;
						cout<<"total a pagar: Q."<<precio-des1<<endl;
						  guardar<<"\n----PLATEA----"<<endl;
						  guardar<<"cantidad de entradas: "<<cant<<endl;
					      guardar<<"pago principal: Q."<<precio<<endl;
					      guardar<<"descuento por la compra de 3 a 6 entradas: Q."<<des1<<endl;
					      guardar<<"NO ES SOCIO"<<endl;
					      guardar<<"total a pagar: Q."<<precio-des1<<endl;	
				     }
				       if(cant>6 && cant<10 && socio==2){
				       	precio=cant*130;
				       	des1=cant*130*0.075;
				       	cout<<" NO ES SOCIO"<<endl;
				       	cout<<"pago principal Q."<<precio<<endl;
				       	cout<<"descuento por la compra de 7 a 9 entradas: Q."<<des1<<endl;
				       	cout<<" total a pagar: Q."<<precio-des1<<endl;
				       	  guardar<<"\n----PLATEA----"<<endl;
				       	  guardar<<"cantidad de entradas: "<<cant<<endl;
					      guardar<<"pago principal: Q."<<precio<<endl;
					      guardar<<"descuento por la compra de 7 a 9 entradas: Q."<<des1<<endl;
					      guardar<<"NO ES SOCIO"<<endl;
					      guardar<<"total a pagar: Q."<<precio-des1<<endl;
				       }
				       if(cant>9  && socio==2){
				       	    precio=cant*130;
				       	    des1=cant*130*0.10;
				       	    cout<<" NO ES SOCIO"<<endl;
				       	    cout<<"pago principal Q."<<precio<<endl;
				       	    cout<<"descuento por la compra de mas de  9 entradas: Q."<<des1<<endl;
				       	    cout<<" total a pagar: Q."<<precio-des1<<endl;
				       	      guardar<<"\n----PLATEA----"<<endl;
				       	      guardar<<"cantidad de entradas: "<<cant<<endl;
					          guardar<<"pago principal: Q."<<precio<<endl;
					          guardar<<"descuento por la compra de mas de 9 entradas: Q."<<des1<<endl;
					          guardar<<"NO ES SOCIO"<<endl;
					          guardar<<"total a pagar: Q."<<precio-des1<<endl;	
				       }
				break;
			}
			case 3:{
				cout<<"ingrese cantidad de entradas que comprara: "<<endl;
				cin>>cant;
				cout<<"usted es socio? 1. Si 2.no "<<endl;
				cin>>socio;
				if(cant<3 && socio==1){
					precio=cant*50;
					des1=cant*50*0.08;
					cout<<" el pago principal es  de: Q."<<precio<<endl;
					cout<<" descuento por ser socio: Q."<<des1<<endl;
					cout<<"tota a pagar: Q."<<precio-des1<<endl;
					  guardar<<"\n----POPULAR----"<<endl;
					  guardar<<"cantidad de entradas: "<<cant<<endl;
					  guardar<<"pago principal: Q."<<precio<<endl;
					  guardar<<"descuento por ser socio: Q."<<des1<<endl;
					  guardar<<"total a pagar: Q."<<precio-des1<<endl;
				} 
				     if(cant>2 && cant<7 && socio==1){
				     	precio=cant*50;
				     	des1=cant*50*0.05;
				     	des2=cant*50*0.08;
				     	cout<<"pago principal: Q."<<precio<<endl;
				     	cout<<"descuento por la compra de 3 a 6 entradas: Q."<<des1<<endl;
				     	cout<<"descuento por ser socio: Q."<<des2<<endl;
						cout<<"total a pagar: Q."<<precio-des1-des2<<endl;
						  guardar<<"\n----POPULAR----"<<endl;
						  guardar<<"cantidad de entradas: "<<cant<<endl;
					      guardar<<"pago principal: Q."<<precio<<endl;
					      guardar<<"descuento por la compra de 3 a 6 entradas: Q."<<des1<<endl;
					      guardar<<"descuento por ser socio: Q."<<des2<<endl;
					      guardar<<"total a pagar: Q."<<precio-des1-des2<<endl;		
				     }
				       if(cant>6 && cant<10 && socio==1){
				       	precio=cant*50;
				       	des1=cant*50*0.075;
				       	des2=cant*50*0.08;
				       	cout<<"pago principal Q."<<precio<<endl;
				       	cout<<"descuento por la compra de 7 a 9 entradas: Q."<<des1<<endl;
				       	cout<<"descuento por ser socio: Q."<<des2<<endl;
				       	cout<<" total a pagar: Q."<<precio-des1-des2<<endl;
				       	  guardar<<"\n----POPULAR----"<<endl;
				       	  guardar<<"cantidad de entradas: "<<cant<<endl;
					      guardar<<"pago principal: Q."<<precio<<endl;
					      guardar<<"descuento por la compra de 7 a 9 entradas: Q."<<des1<<endl;
					      guardar<<"descuento por ser socio: Q."<<des2<<endl;
					      guardar<<"total a pagar: Q."<<precio-des1-des2<<endl;	
				       }
				       if(cant>9  && socio==1){
				       	    precio=cant*50;
				       	    des1=cant*50*0.10;
				       	    des2=cant*50*0.08;
				       	    cout<<"pago principal Q."<<precio<<endl;
				       	    cout<<"descuento por la compra de mas de  9 entradas: Q."<<des1<<endl;
				       	    cout<<"descuento por ser socio: Q."<<des2<<endl;
				       	    cout<<" total a pagar: Q."<<precio-des1-des2<<endl;
				       	      guardar<<"\n----POPULAR----"<<endl;
				       	      guardar<<"cantidad de entradas: "<<cant<<endl;
					          guardar<<"pago principal: Q."<<precio<<endl;
					          guardar<<"descuento por la compra de mas de 9 entradas: Q."<<des1<<endl;
					          guardar<<"descuento por ser socio: Q."<<des2<<endl;
					          guardar<<"total a pagar: Q."<<precio-des1-des2<<endl;	
				       }
				       	if(cant<3 && socio==2){
				        	precio=cant*50;
				        	cout<<" el pago principal es  de: Q."<<precio<<endl;
				        	cout<<" NO ES SOCIO"<<endl;
					        cout<<"tota a pagar: Q."<<precio<<endl;
					          guardar<<"\n----POPULAR----"<<endl;
					          guardar<<"cantidad de entradas: "<<cant<<endl;
					          guardar<<"pago principal: Q."<<precio<<endl;
					          guardar<<"NO ES SOCIO"<<endl;
					          guardar<<"total a pagar: Q."<<precio<<endl;
				           } 
				     if(cant>2 && cant<7 && socio==2){
				     	precio=cant*50;
				     	des1=cant*50*0.05;
				     	cout<<" NO ES SOCIO"<<endl;
				     	cout<<"pago principal: Q."<<precio<<endl;
				     	cout<<"descuento por la compra de 3 a 6 entradas: Q."<<des1<<endl;
						cout<<"total a pagar: Q."<<precio-des1<<endl;
						  guardar<<"\n----POPULAR----"<<endl;
						  guardar<<"cantidad de entradas: "<<cant<<endl;
					      guardar<<"pago principal: Q."<<precio<<endl;
					      guardar<<"descuento por la compra de 3 a 6 entradas: Q."<<des1<<endl;
					      guardar<<"NO ES SOCIO"<<endl;
					      guardar<<"total a pagar: Q."<<precio-des1<<endl;		
				     }
				       if(cant>6 && cant<10 && socio==2){
				       	precio=cant*50;
				       	des1=cant*50*0.075;
				       	cout<<" NO ES SOCIO"<<endl;
				       	cout<<"pago principal Q."<<precio<<endl;
				       	cout<<"descuento por la compra de 7 a 9 entradas: Q."<<des1<<endl;
				       	cout<<" total a pagar: Q."<<precio-des1<<endl;
				       	  guardar<<"\n----POPULAR----"<<endl;
				       	  guardar<<"cantidad de entradas: "<<cant<<endl;
					      guardar<<"pago principal: Q."<<precio<<endl;
					      guardar<<"descuento por la compra de 7 a 9 entradas: Q."<<des1<<endl;
					      guardar<<"NO ES SOCIO"<<endl;
					      guardar<<"total a pagar: Q."<<precio-des1<<endl;
				       }
				       if(cant>9  && socio==2){
				       	    precio=cant*50;
				       	    des1=cant*50*0.10;
				       	    cout<<" NO ES SOCIO"<<endl;
				       	    cout<<"pago principal Q."<<precio<<endl;
				       	    cout<<"descuento por la compra de mas de  9 entradas: Q."<<des1<<endl;
				       	    cout<<" total a pagar: Q."<<precio-des1<<endl;
				       	      guardar<<"\n----POPULAR----"<<endl;
				       	      guardar<<"cantidad de entradas: "<<cant<<endl;
					          guardar<<"pago principal: Q."<<precio<<endl;
					          guardar<<"descuento por la compra de mas de 9 entradas: Q."<<des1<<endl;
					          guardar<<"NO ES SOCIO"<<des2<<endl;
					          guardar<<"total a pagar: Q."<<precio-des1<<endl;	
				       }
				break;
			}
			case 4:{	break;
				        default: cout<<"el numero ingresado no existe en el menu"<<endl;
			}
		}
		cout<<"\n1.menu 2.salir";
		cin>>menu;
	
	}while (menu==1);
	system ("pause");
	
}    
    
			    
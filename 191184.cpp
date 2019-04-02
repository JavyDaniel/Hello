#include <iostream>
using namespace std;
float m[4][2]{27,50,
	          24,43.5,
			  64,117.9,
			  97,170};



				  
				  
void bienvenida();
void menu();
void cantidad();
void compra(int producto);
void tipopago();
int salida();



int main()
{   int producto;
	int reinicio;

     
	do{
		     
     bienvenida();
	 menu();
	 cantidad();
	 tipopago();	
	 reinicio=salida();
	 }
	 while (reinicio==1);
	
	 


	    	
	}

void bienvenida(){
	cout<<"Bienvenidos al supermercado de Javciier" <<endl;
	cout<<"Te ofrecemos los siguientes productos:" <<endl;
	cout<<"\n";
	
}
void menu(){
	    cout << "Next tabletas $27c/u o 2x$50" << endl;
		cout << "Tabcin active capsulas $24c/u o 2x$43.50" << endl;
		cout << "XL-3 capsulas $64c/u o 2x$117.90" << endl;
		cout << "Theraflu (caja con 6 sobres) $97c/u 2x$170" << endl;
		cout <<"\n";
	
}
void cantidad(){
	    int producto;
	    for(int i=1;i<=1;i++){
	    		cout<<"¿Cuantos productos desea adquirir?" <<endl;
		cin>>producto;
		cout<<"\n";
		if(producto>0 && producto<=3)
		{
		}
		else{
			cout<<"No pude adquirir esta cantidad de productos" <<endl;
		
			i=i-1;
			cout<<"\n";
		}
	    	
		}
	
	compra(producto);
}
void compra(int producto)
            {
	           float precionext=0,preciotab=0,precioxl=0,preciothera=0, sumaprecios=0,iva=0.16,valoriva=0,total;
	           int next,tabcin,xl,theraflu,totalproductos=0;
	           
	           for(int j=1;j<=1;j++){
	           	cout<<"\nIngrese la cantidad deseada de cada producto" <<endl;
				cout<<"Recuerde que no puede adquirir mas de 3 productos por compra " <<endl;
				cout<<"Next tabletas" <<endl;
				cin>>next;
				if (next==3) 
				{
				precionext=m[0][0]+ m[0][1];
			    } else 
				{
				    if (next==2) 
				{
					precionext=m[0][1];
				} else 
				    {
					if (next==1) 
					{
						precionext=m[0][0];
					}
				}
			    }
				cout<<"Tabcin active capsulas" <<endl;
				cin>>tabcin;
				if (tabcin==3) 
			{
				preciotab=m[1][0]+m[1][1];
			} else 
			{
				if (tabcin==2) 
				{
					preciotab=m[1][1];
				} else 
				{
					if (tabcin==1) 
					{
						preciotab=m[1][0];
					}
				}
			}
				cout<<"XL-3 capsulas" <<endl;
				cin>>xl;
				if (xl==3) 
			{
				precioxl=m[2][0]+m[2][1];
			} else 
			{
				if (xl==2) 
				{
					precioxl=m[2][1];
				} else 
				{
					if (xl==1) 
					{
						precioxl=m[2][0];
					}
				}
			}
				
				cout<<"Theraflu" <<endl;
				cin>>theraflu;
				if (theraflu==3) {
				preciothera=m[3][0]+m[3][1];
			} else {
				if (theraflu==2) {
					preciothera=m[3][1];
				} else {
					if (theraflu==1) {
						preciothera=m[3][0];
					}
				}
				
			}
			   totalproductos=next+tabcin+xl+theraflu;
			   
			   if(totalproductos==producto){
			   	sumaprecios=precionext+preciotab+precioxl+preciothera;
			   	valoriva=sumaprecios*iva;
			   	total=sumaprecios+valoriva;
			   	cout<<"El total a pagar de su compra son: $"; cout<<total; cout<<" con IVA incluido";
			    
			   }
			   else{
			   	cout<<"No esta adquiriendo la cantidad de productos ingresados" <<endl;
			   	j=j-1;
			   	precionext=0;
			   	preciotab=0;
			   	precioxl=0;
			   	preciothera=0;
			   
			   	
			   	cout<<"\n";
			   }
	           	
			   }
		        
}
void tipopago(){
	            int pago,nip;
             	cout<<"\nComo desea realizar su pago" <<endl;
				cout<<"1.Tarjeta (debito o credito)" <<endl;
				cout<<"2.Efectivo" <<endl;
				cin>>pago;
				switch(pago)
				{
				case 1:
					cout<<"Digite su nip (4 digitos)" <<endl;
					cin>>nip;
					if (nip>=0 && nip<=999) 
				{
					cout << "nip invalido" << endl;
				} else 
				{
					if (nip>=0 && nip<=9999) 
					{
						cout << "nip aceptado" << endl;
						cout <<"Su compra ah sido efectuada" <<endl;
						cout <<"GRACIAS POR SU PREFERENCIA" <<endl;
					} else 
					{
						cout << "nip invalido" << endl;
					}
				}
				break;
				case 2:
					cout<<"Su compra ah sido efectuado" <<endl;
					cout<<"GRACIAS POR SU PREFERENCIA" <<endl;
				
				break;
				
				default:
					cout<<"No puede realizar su pago por otro metodo" <<endl;
					
					
					
				}	
	
}
int salida(){
	     int opcion;
	     cout<<"Presione 1 si desea realizar otra compra o cualquier otro numero para salir" <<endl;
		 cin>>opcion;
		 cout<<"\n";
		
		return opcion;
	
}


	    
	


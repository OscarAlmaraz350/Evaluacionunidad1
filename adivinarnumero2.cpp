#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;
int main()
{
int numero, dato, i = 4, intentos = 5, rango = 0;
	cout<<"Escoga el rango: ";
	cin>>rango;
    srand(time(NULL));
    dato = 1 + rand()%(2-rango);
			    cout<<"\nSe ha escogido un numero al azar\n";
				cout<<"Adivine el numero del 1 al "<<rango<<" en 5 intentos: ";
		do{
			
			cin>>numero;
    		intentos = intentos-1;   		
        	if (numero > dato){
        	    cout<<"\nPonga otro numero menor \n";
			}
        	if (numero <dato){
        	    cout<<"\nPonga un numero mayor \n";
			}
			if(intentos==0)	{
        		cout<<"Lo siento, pero el numero correcto era: "<<dato<<endl;
        		cout<<"Juego terminado"<<endl;
        		return 0;
			}else{
				cout<<"\nTiene "<<i<<" intentos restantes.\n"<<endl;
			}
  			i--;
    	}while (numero !=dato || (intentos==0));
        		cout<<"\nFelicidades, Acerto el numero\n";
        		cout<<"Intento adivinarlo: "<<i<<" veces."<<endl;
				return 0;
}
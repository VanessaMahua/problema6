# problema6
#include <iostream>

using namespace std;
char * copiar_cadena(char* cad1, char* cad2){	
	int i = 0;
	while(cad1[i]){						
		cad2[i] = cad1[i];		
		i++; 
	}
	return cad2;
}

void concatenar(char* cad1, char* cad2){
	while(*cad1)   
    {
       cad1++;      
    }
    while(*cad2)    
    {
       *cad1 = *cad2;   
       cad1++;      	
       cad2++;      	
    }
    *cad1='\0';     	  
	
}

int longitud(char *cad){
	int i = 0;
	char *tmp = cad;
	while(*tmp){
		tmp++;			
		i++;		
	}
	return i;
}

bool comparar(char* cad1, char* cad2){
	int i = 0;
	bool flag = 0;		
	char *tmp = cad1;
	char *tmp2 = cad2;
	
	while(*tmp){		
		if (tmp[i] == tmp2[i])
			flag = 1;	
		else
		{
			flag = 0;	
			break;		
		}
			
		tmp++;			
		tmp2++;			
		i++;
	}
	return flag;		
}
int main (){
	
	int selec = 1;
	char cad1[20] ;
	char cad2[20] ;
	while (selec != 0){
	cout << "\n1) Copiar contenido a otra cadena  " <<endl <<
			"2) Juntar dos cadenas  "<<endl <<
			"3) Longitud de una cadena  " <<endl <<
			"4) Compara si dos cadenas son iguales  "<<endl<<
			"5) Digite 0 para salir . "<<endl ;
	cout << "\nElige una opcion : ";	cin>> selec;
	cout << endl;
		switch ( selec ) {
			case 1:
				cout<<"\nIngresa la cadena uno : "; cin >> cad1;
				cout<<"Ingresa la cadena dos : "; cin >> cad2;
				cout << copiar_cadena(cad1,cad2);
			break;
			case 2:     
				cout<<"\n Ingresa una cadena uno : "; cin >> cad1;
				cout<<"\n Ingresa una cadena dos : "; cin >> cad2;       
				concatenar(cad1,cad2);
				cout << "Cadena concatenada : " << cad1 << endl;
			break;
			case 3:
				cout<<"\nIngresa la cadena uno : "; cin >> cad1;
				cout<<"longitud "<<longitud(cad1)<<endl;
			break;
			case 4:            
				cout<<"\n Ingresa una cadena uno : "; cin >> cad1;
				cout<<"\n Ingresa una cadena dos : "; cin >> cad2;
				if (comparar(cad1,cad2) )
					cout << "\nIguales !!!";
				else
					cout << "\nDiferentes !!!";

			break;
			
			default: 
				cout<<"Saliendo !!!\n";
			break;
		}
	}
	
	
	return 0;
	
}

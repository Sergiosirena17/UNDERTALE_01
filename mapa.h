#include <iostream>
#include "mapa_matriz.h"
using namespace std;
class mapa{	
public:
	int x,y;
	
	char map;
///////////CONSTRUCTORES//////////////////////////////////
/////PREDETERMINADO///////////
	mapa(){
		x = 0; y = 0; cout << "Los ejes x y y fueron creados" << endl;
	}
/////////////////////////////////////////
	mapa(int tipo_mapa[2368][3744]) {
		x = 2368;y = 3744; cout << "Los ejes ya tienen su valor, laberinto" << endl;
		///////ELSE IF PARA OTROS MAPAS/////////////
	}

	///////////VER LOS COLORES AL IMPRIMIR EL MAPA///////	
	void color(){
		for(int i = 0; i<=x ; i++){
			for(int j = 0; j <= y; j++){			
				if(tipo_mapa[i][j] == 1){
					cout << "\x1b[40m"<< tipo_mapa[i][j]<<"\x1B[0m";	
				}
				else if(tipo_mapa[i][j] == 2){	
					cout << "\x1b[47m"<< tipo_mapa[i][j]<<"\x1B[0m";					
				}
				else if(tipo_mapa[i][j] == 5){	
					cout << "\x1b[44m"<< tipo_mapa[i][j]<<"\x1B[0m";					
				}
				else if(tipo_mapa[i][j] == 6){	
					cout << "\x1b[45m"<< tipo_mapa[i][j]<<"\x1B[0m";					
				}
			}
			
		}
	}
	/////IMPRIMIR EL MAPA/////////////
	
	//////La cámara será de 40x40
	void print(){
		for(int i = 0; i<=40;i++){		
			for(int j = 0; j<=40;j++){				
				cout << mapa[i][j];				
			}			
			cout << endl;
		}
	}
};	

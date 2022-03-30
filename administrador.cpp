#include "administrador.h"

administrador::administrador() {
	for(int i=0; i<15; i++){
		for(int j=0; j<11; j++){
			tabla[i][j]=0;
			if(j==0){
				tabla[i][j]=9;
			}
			if( i==14){
				tabla[i][j]=8;
			}
			if(j==10){
				tabla[i][j]=9;
			}
			
		}
	}
	freno=0;
	status=0;
	admin=0;
	puntaje=0;
}
void administrador::iniciador(int x, int y, int valor){
	tabla[x][y+3]=valor;
}
void administrador::mostrar(){
	
	system("cls");
	for(int i=0; i<15; i++){
		for(int j=0; j<11; j++){
			cout<<tabla[i][j];
		}
		cout<<endl;
	}
	
	
}
int administrador::keypress(){
	int temp=0;
	if(kbhit()){
		temp=getch();
		switch(temp){
		case 80:
			temp=1;
			
			break;
		case 77:
			temp=2;
			break;
		case 75:
			temp=3;
			break;
		case 113:
			temp=4;
			break;
		}
	}
	freno=0;
return temp;
	
}
void administrador::mover_ficha(int recibo){
	
	if(freno==0){
	switch(recibo){
	case 1:	
		for(int i=14; i>-1; i--){
			for(int j=0; j<11; j++){
				if(tabla[i][j]==2 && tabla[i+1][j]!=0){
					//cout<<"Error en "<<i<<j<<endl;
					freno=1;
					
					break;
				}
				if(freno==1){
					break;
				}
				if(tabla[i][j]==2 && tabla[i+1][j]==0){
					//	cout<<"check";
					tabla[i][j]=0;
					tabla[i+1][j]=2;
					
				}
				
			}
		}
		break;
	case 2:
		for(int i=14; i>-1; i--){
			for(int j=10; j>-1; j--){
				if(tabla[i][j]==2 && tabla[i][j+1]!=0){
					//cout<<"Error en "<<i<<j<<endl;
					freno=1;
					
					break;
				}
				if(freno==1){
					break;
				}
				if(tabla[i][j]==2 && tabla[i][j+1]==0){
					//	cout<<"check";
					tabla[i][j]=0;
					tabla[i][j+1]=2;
					
				}
				
			}
		}
		break;
	case 3:
		for(int i=14; i>-1; i--){
			for(int j=0; j<11; j++){
				if(tabla[i][j]==2 && tabla[i][j-1]!=0){
					//cout<<"Error en "<<i<<j<<endl;
					freno=1;
					
					break;
				}
				if(freno==1){
					break;
				}
				if(tabla[i][j]==2 && tabla[i][j-1]==0){
					//	cout<<"check";
					tabla[i][j]=0;
					tabla[i][j-1]=2;
					
				}
				
			}
		}
		break;
	}
}
}
void administrador::transformar(int x, int y){
	if(tabla[x][y]==2){
		if(tabla[x+1][y]==1 || tabla[x+1][y]==8){
			
			admin=1;
			for(int i=0; i<15;i++){
				for(int j=0; j<11; j++){
					if(tabla[i][j]==2){
						tabla[i][j]=1;
					}
				}
			}
			
			
		}
		else{
			admin=0;
		}
		
	}
}

void administrador::prerotacion(){
	for (int i=0; i<15; i++){
		for(int j=0; j<11; j++){
			if(tabla[i][j]==2){
				tabla[i][j]=0;
			}
		}
	}
}

void administrador::bajar(int x){
	for(x; x>-1; x--){
		for(int j=0; j<11; j++){
			if(tabla[x][j]==0 && tabla[x-1][j]==1){
				tabla[x][j]=1;
				tabla[x-1][j]=0;
			}
		}
	}
}

void administrador::revisar_tetris(){
	int contador_temporal=0;
	int temp=0;
	
	for(int i=0; i<15;i++){
		for(int j=0; j<11; j++){
			if(tabla[i][j]==1){
				contador_temporal++;
				
				
				if(contador_temporal==9){
					temp=i;
					for(int i=0; i<15;i++){
						for(int j=0; j<11; j++){
							if(tabla[temp][j]==1){
								tabla[temp][j]=0;
								
							}
						}
					}
					bajar(temp);
					contador_temporal=0;
					puntaje=puntaje+1000;
					
				}
				
				
			}
			else{
				
				
				contador_temporal=0;
			}
		}
	}
}
bool administrador::control(){
	admin=0;
		return 1;
	

}
void administrador::interfaz(){
	gotoxy(30,1);
	cout<<"Puntaje: "<<endl;
	gotoxy(30,2);
	cout<<puntaje<<endl;
	gotoxy(30,5);
	cout<<"Pulse Q para rotar ficha."<<endl;
	gotoxy(1,1);
}

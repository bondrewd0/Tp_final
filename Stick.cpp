#include "Stick.h"

Stick::Stick(int num, int arr[15][11], int new_score) {
	
	if(num==1){
		reimprimir_mat(arr);
		puntaje=new_score;
	}
	
	pieza[0][0]=2;
	pieza[0][1]=2;
	pieza[0][2]=2;
	pieza[0][3]=2;
	
	for(int i=0; i<1; i++){
		for(int j=0; j<4; j++){
			iniciador(i,j,pieza[i][j]);
		}
	}
	status=1;
}
void Stick::subadmin(){
	stick_admin();
	//revisar_tetris();
}
void Stick::stick_admin(){
	
	tecla=keypress();
	if(tecla==4){
		status++;
		if(status==2){
			status=0;
		}
		rotar(status);
	}
	else{
		
		mover_ficha(tecla);
	}
	for(int i=14; i>-1; i--){
		for(int j=0; j<11; j++){
			transformar(i,j);
		}
	}
}

void Stick::rotar(int state){
	int cord1, cord2;
	switch(state){
	case 1:
		for(int i=14; i>-1; i--){
			for(int j=0; j<11; j++){
				if(tabla[i][j]==2){
					//cout<<"check"<<endl;
					if(tabla[i-1][j]==2 && tabla[i+1][j]==0){
						if(tabla[i][j+3]==0){
							
							cord1=i;
							cord2=j;
							
							break;
						}
						else{
							freno=1;
							status--;
							break;
						}
					}
				}
			}
		}
		if(freno==0){
			prerotacion();
			tabla[cord1][cord2]=2;
			tabla[cord1][cord2+1]=2;
			tabla[cord1][cord2+2]=2;
			tabla[cord1][cord2+3]=2;
			
			
		}
		break;
	case  0:
		for(int i=14; i>-1; i--){
			for(int j=0; j<11; j++){
				if(tabla[i][j]==2){
					//cout<<"check"<<endl;
					if(tabla[i][j+1]==2){
						if(tabla[i-3][j]==0){
							
							cord1=i;
							cord2=j;
							
							break;
						}
						else{
							freno=1;
							status--;
							break;
						}
					}
				}
			}
		}
		if(freno==0){
			prerotacion();
			tabla[cord1][cord2]=2;
			tabla[cord1-1][cord2]=2;
			tabla[cord1-2][cord2]=2;
			tabla[cord1-3][cord2]=2;
			
			
		}
		break;
	}
}

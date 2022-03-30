#include "Stick.h"

Stick::Stick() {
	pieza[0][0]=2;
	pieza[1][0]=2;
	pieza[2][0]=2;
	pieza[3][0]=2;
	
	for(int i=0; i<4; i++){
		for(int j=0; j<1; j++){
			iniciador(i,j,pieza[i][j]);
		}
	}
	status=0;
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

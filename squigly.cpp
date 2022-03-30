#include "squigly.h"

squigly::squigly() {
	pieza[0][0]=2;
	pieza[1][0]=0;
	pieza[2][0]=0;
	pieza[0][1]=2;
	pieza[1][1]=2;                
	pieza[2][1]=0; 
	pieza[0][2]=0;
	pieza[1][2]=2;
	pieza[2][2]=0;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			metodo_cajon(i,j,pieza[i][j]);
		}
	}
	status=0;
}
void squigly::metodo_cajon(int x, int y, int a){
	int temp1, temp2, temp3;
	temp1=x;
	temp2=y;
	temp3=a;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			iniciador(temp1,temp2,temp3);
		}
	}
}
int squigly::admin_sq(){
	
	tecla=keypress();
	if(tecla==4){
		status++;
		if(status==2){
			status=0;
		}
		rotar_squi(status);
	}
	else{
		
		mover_ficha(tecla);
	}
	for(int i=14; i>-1; i--){
		for(int j=0; j<11; j++){
			transformar(i,j);
			if(admin==1){
				return 0;
				admin=0;
			}
		}
	}
	return 1;
}
void squigly::rotar_squi(int state){
	int cord1, cord2;
	
	switch(state){
	case 1:
		
		for(int i=14; i>-1; i--){
			for(int j=0; j<11; j++){
				if(tabla[i][j]==2){
					cout<<"check"<<endl;
					if(tabla[i-1][j]==2){
						if(tabla[i+1][j-1]==0){
					
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
			tabla[cord1+1][cord2]=2;
			tabla[cord1-1][cord2+1]=2;
			tabla[cord1][cord2+1]=2;
			
			
		}
		break;
	case 0:
		for(int i=14; i>-1; i--){
			for(int j=0; j<0; j++){
				if(tabla[i][j]==2){
					if(tabla[i-1][j]==2){
						if(tabla[i+1][j+2]==0){
							
							cord1=i;
							cord2=j;
							break;
						}
						else{
							freno=1;
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
			tabla[cord1+1][cord2+1]=2;
			tabla[cord1+1][cord2+2]=2;
			
			
		}
		break;
	}
}

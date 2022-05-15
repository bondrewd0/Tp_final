#include "Ele_A.h"

Ele_A::Ele_A(int num, int arr[15][11], int new_score) {

	if(num==1){
		reimprimir_mat(arr);
		puntaje=new_score;
	}
	
	pieza[0][0]=2;
	pieza[1][0]=0;
	pieza[0][1]=2;
	pieza[1][1]=0;
	pieza[0][2]=2;
	pieza[0][3]=2;
	pieza[1][3]=2;
	pieza[1][2]=0;
	
	for (int i=0; i<2; i++){
		for(int j=0; j<4; j++){
			if(pieza[i][j]==2){
			iniciador(i,j,pieza[i][j]);
			}
		}
	}
	status=0;
}

void Ele_A::subadmin(){
	ele_admin();
	//revisar_tetris();
}

void Ele_A::ele_admin(){
	
	
	
	tecla=keypress();
	if(tecla==4){
		status++;
		if(status==4){
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
void Ele_A::rotar(int state){
	int cord1, cord2;
	
	switch(state){
	case 1:
	
	for(int i=14; i>-1; i--){
		for(int j=0; j<11; j++){
			if(tabla[i][j]==2){
				//cout<<"Check"<<endl;
				if(tabla[i+2][j+1]==0){
					cord1=i;
					cord2=j;
					break;		
				}
				else{
					//cout<<"Error check";
					freno=1;
					status--;
					break;
				}
			}
			
		}
	}
	if(freno==0){
		prerotacion();
		tabla[cord1][cord2]=2;
		tabla[cord1+2][cord2-1]=2;
		tabla[cord1+1][cord2]=2;
		tabla[cord1+2][cord2]=2;
		
		
	}
	break;
	
	case 2:
		
		for(int i=14; i>-1; i--){
			for(int j=0; j<11; j++){
				if(tabla[i][j]==2 && tabla[i][j+1]==2){
					
					if(tabla[i-1][j-2]==0){
						//cout<<"Check"<<endl;
						cord1=i;
						cord2=j;
						break;		
					}
					else{
						//cout<<"Error check";
						freno=1;
						status--;
						break;
					}
				}
				
			}
		}
		if(freno==0){
			prerotacion();
			tabla[cord1][cord2-1]=2;
			tabla[cord1][cord2-2]=2;
			tabla[cord1][cord2]=2;
			tabla[cord1-1][cord2-2]=2;
			
			
		}
	
	break;
case 3:
	
	for(int i=14; i>-1; i--){
		for(int j=0; j<11; j++){
			if(tabla[i][j]==2 && tabla[i-1][j]==2){
				//cout<<"Check"<<endl;
				if(tabla[i-2][j+1]==0){
					cord1=i;
					cord2=j;
					break;		
				}
				else{
					//cout<<"Error check";
					freno=1;
					status--;
					break;
				}
			}
			
		}
	}
	if(freno==0){
		prerotacion();
		tabla[cord1][cord2]=2;
		tabla[cord1-2][cord2+1]=2;
		tabla[cord1-1][cord2]=2;
		tabla[cord1-2][cord2]=2;
		
		
	}
	break;
	
	case 0:
		for(int i=14; i>-1; i--){
			for(int j=0; j<11; j++){
				if(tabla[i][j]==2 && tabla[i-1][j]==2){
					
					if(tabla[i+1][j+2]==0){
						//cout<<"Check"<<endl;
						cord1=i;
						cord2=j;
						break;		
					}
					else{
						//cout<<"Error check";
						freno=1;
						
						break;
					}
				}
				
			}
		}
		if(freno==0){
			prerotacion();
			tabla[cord1][cord2]=2;
			tabla[cord1][cord2+1]=2;
			tabla[cord1][cord2+2]=2;
			tabla[cord1+1][cord2+2]=2;
			
			
		}
		break;
}
}

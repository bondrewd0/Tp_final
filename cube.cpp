#include "cube.h"

cube::cube(int num, int arr[15][11], int new_score) {
	
	if(num==1){
		reimprimir_mat(arr);
		puntaje=new_score;
	}
	
	pieza[0][0]=2;
	pieza[0][1]=2;
	pieza[1][0]=2;
	pieza[1][1]=2;
	
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			iniciador(i,j,pieza[i][j]);
		}
	}
}
void cube::subadmin(){
	cube_admin();
	//revisar_tetris();
}
void cube::cube_admin(){

	tecla=keypress();
		if(tecla!=4){
		mover_ficha(tecla);
		}
	for(int i=14; i>-1; i--){
		for(int j=0; j<11; j++){
			transformar(i,j);
		}
	}

}

#include "cube.h"

cube::cube() {
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

void cube::cube_admin(){

	tecla=keypress();
		
		mover_ficha(tecla);
	for(int i=14; i>-1; i--){
		for(int j=0; j<11; j++){
			transformar(i,j);
		}
	}

}

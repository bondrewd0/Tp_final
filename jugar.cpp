#include "jugar.h"

jugar::jugar() {
	adm = new administrador();
	temporal=0;
	game=true;
	srand(time(NULL));
	cambiar();
	
	velocidad=10;
	paso=CLOCKS_PER_SEC/velocidad; 
	tempo=clock(); 
	tiempo2=5;
}

void jugar::play()
{
	
	while(game==true){
		if(tempo+paso<clock()){
			
			
			
			
		
		if(adm->check_game_over()==1){
			game=false;
		}
	
	adm->mostrar();
	adm->subadmin();
	adm->revisar_tetris();
	
	if(adm->control()==1)
	{
		cambiar();
	}
	tiempo2--;
	if(tiempo2==0){
	adm ->mover_ficha(1);
	tiempo2=5;
	}
	tempo=clock();
         }
	}
}

	void jugar::cambiar(){
		int num;
		num=rand()%7+1;
		copiar_tabla();
		switch(num){
		case 1:
			adm = new squigly(1, tabla_temporal,score_temp);
			break;
		case 2:
			adm = new squigly_inverso(1,tabla_temporal,score_temp);
			break;
		case 3:
			adm = new cube(1,tabla_temporal,score_temp);
			break;
		case 4:
			adm = new Stick(1,tabla_temporal,score_temp);
			break;
		case 5:
			adm = new Te(1,tabla_temporal,score_temp);
			break;
		case 6:
			adm = new Ele_A(1,tabla_temporal,score_temp);
			break;
		case 7:
			adm = new Ele_B(1,tabla_temporal,score_temp);
			break;
		}
	}
	
void jugar::copiar_tabla()
{
	
	for (int i=0; i<15; i++){
		for (int j=0; j<11; j++){
			tabla_temporal[i][j]=adm->devolver_tabla(i,j);
		}
	}
    score_temp=adm->send_score();
}



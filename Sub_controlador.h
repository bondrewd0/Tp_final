#ifndef SUB_CONTROLADOR_H
#define SUB_CONTROLADOR_H
#include "squigly.h"
#include "squigly_inverso.h"
#include "cube.h"
#include "Stick.h"
#include "Ele_A.h"
#include "Ele_B.h"
#include "Te.h"
#include "administrador.h"
#include "Sub_controlador.h"

class Sub_controlador: public administrador, public squigly, public squigly_inverso, public cube, public Stick, public Ele_A, public Ele_B, public Te{
public:
	Sub_controlador();
	void admin_sub();

	squigly squi;
private:
	administrador admin1;
	
	
	
};

#endif


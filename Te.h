#ifndef TE_H
#define TE_H
#include "administrador.h"
class Te :virtual public administrador{
public:
	Te();
	void te_admin();
	void rotar(int state);
private:
	int pieza[2][3];
	int status;
};

#endif


#ifndef TE_H
#define TE_H
#include "administrador.h"
class Te : public administrador{
public:
	Te(int num, int arr[15][11], int new_score);
	void te_admin();
	void rotar(int state);
	void subadmin();
private:
	int pieza[2][3];
	int status;
};

#endif


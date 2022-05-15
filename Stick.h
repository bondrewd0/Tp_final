#ifndef STICK_H
#define STICK_H
#include "administrador.h"
class Stick : public administrador{
public:
	Stick(int num, int arr[15][11], int new_score);
	void stick_admin();
	void rotar(int state);
	void subadmin();
private:
		int pieza[1][4];
		int status;
};

#endif


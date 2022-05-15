#ifndef CUBE_H
#define CUBE_H
#include "administrador.h"
class cube: public administrador {
public:
	cube(int num, int arr[15][11], int new_score);
	void cube_admin();
	void subadmin();
private:
	int pieza[2][2];
	
};

#endif


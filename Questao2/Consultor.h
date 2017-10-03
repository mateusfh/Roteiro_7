#ifndef CONSULTOR_H_
#define CONSULTOR_H_

#include "Funcionario.h"

class Consultor: public Funcionario {
public:
	double getSalario();
	double getSalario( float percentual);
};

#endif /* CONSULTOR_H_ */


#include "Consultor.h"

double Consultor::getSalario(){
 	double x =  Funcionario::getSalario();
 	double y = (x * 0.1) + x;
 	return y;
}

double Consultor::getSalario(float percentual){
	double x =  Funcionario::getSalario();
	double y = ( x * (percentual/100)) + x;
	return y;
}


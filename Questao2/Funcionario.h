#ifndef FUNCIONARIO_H_
#define FUNCIONARIO_H_

#include <string>
using namespace std;

class Funcionario {
private:
	string nome;
	string matricula;
	double salario;

public:
	string getNome();
	string getMatricula();
	double getSalario();

	void setNome( string nome );
	void setMatricula( string matricula );
	void setSalario( double salario );
};

#endif /* FUNSIONARIO_H_ */


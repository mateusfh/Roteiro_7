#include <iostream>
#include <string>
using namespace std;

#include "Funcionario.h"
#include "Consultor.h"

int main(){
	Funcionario f;

	f.setNome("Jose");
	f.setMatricula("1111111111");
	f.setSalario(1000);
	
	Consultor c;
	c.setNome("Jose");
	c.setMatricula("1111111111");
	c.setSalario(1000);

	cout << "Objeto Funcionario" << endl;
	cout << "Nome: " << f.getNome() << endl;
	cout << "Matricula: " << f.getMatricula() << endl;
	cout << "Salario: " << f.getSalario() << endl << endl;
	
	cout << "Objeto Consultor" << endl;
	cout << "Nome: " << c.getNome() << endl;
	cout << "Matricula: " << c.getMatricula() << endl;
	cout << "Salario com 10%: " << c.getSalario() << endl;
	double x;
	cout << "Digite um percentual: ";
	 cin >> x;
	cout << "Salario com " << x << "%: " << c.getSalario(x);
	cout << endl << endl;
//	getchar();

	return 0;
}


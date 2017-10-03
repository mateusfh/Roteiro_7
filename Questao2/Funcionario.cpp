#include "Funcionario.h"

string Funcionario::getNome(){ return nome; }
string Funcionario::getMatricula(){ return matricula; }
double Funcionario::getSalario(){ return salario; }

void Funcionario::setNome( string nome ){ this->nome = nome; }
void Funcionario::setMatricula( string matricula ){ this->matricula = matricula; }
void Funcionario::setSalario( double salario ){ this->salario = salario; }


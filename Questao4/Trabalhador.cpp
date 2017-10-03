#include "Trabalhador.h"

// Metodos Get:
string Trabalhador::getNome(){
    return this->nome;
}

double Trabalhador::getSalarioMensal(){
    return this->salarioMensal;
}

double Trabalhador::calcularPagamento( int Horas ){
        return salarioMensal/4;
}

// Metodos Set:

void Trabalhador::setNome( string nome ){
    this->nome = nome;
}

void Trabalhador::setSalarioMensal( double salario ){
    this->salarioMensal = salario;
}

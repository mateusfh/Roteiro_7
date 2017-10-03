#include <iostream>
#include <string>
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"

using namespace std;

int main()
{
    TrabalhadorAssalariado ta;
    TrabalhadorPorHora tp;
    ta.setNome("Joao");
    ta.setSalarioMensal(1000);
    cout << "Trabalhador Assalariado" << endl;
    cout << "Nome: " << ta.getNome() << endl;
    cout << "Salario: " << ta.getSalarioMensal() << endl;
    cout << "Salario Semanal: " << ta.calcularPagamento(30) << endl << endl;

    tp.setNome("Maria");
    tp.setSalarioMensal(450);
    cout << "Trabalhador Por Hora" << endl;
    cout << "Nome: " << tp.getNome() << endl;
    cout << "Salario: " << tp.getSalarioMensal() << endl;
    cout << "Salario Semanal: " << tp.calcularPagamento(50) << endl << endl;


    return 0;

}

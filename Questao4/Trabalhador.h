#ifndef TRABALHADOR_H
#define TRABALHADOR_H

#include <string>
using namespace std;

class Trabalhador{
    private:
        string nome;
        double salarioMensal;
        
    public:
        void setNome( string nome );
        void setSalarioMensal( double salario );
        string getNome();
        double getSalarioMensal();
        double calcularPagamento( int Horas );       
    
};

#endif

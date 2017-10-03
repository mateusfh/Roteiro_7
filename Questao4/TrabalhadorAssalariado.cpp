#include "TrabalhadorAssalariado.h"

double TrabalhadorAssalariado::calcularPagamento( int Horas ){
    double salHora = (this->getSalarioMensal()/4)/40;
    return salHora*40;
}


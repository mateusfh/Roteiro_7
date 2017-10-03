#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H

#include "Trabalhador.h"

class TrabalhadorPorHora: public Trabalhador{
public:
    double calcularPagamento( int Horas );
};

#endif

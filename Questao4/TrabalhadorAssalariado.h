#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H

#include "Trabalhador.h"

class TrabalhadorAssalariado: public Trabalhador{
   public:
        double calcularPagamento(int Horas);
};

#endif

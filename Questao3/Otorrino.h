#ifndef OTORRINO_H
#define OTORRINO_H

#include "Medico.h"
#include <iostream>
using namespace std;


class Otorrino: public Medico{
    public:
		void consulta();
		void cirurgia();
		void especializacao();
};

#endif


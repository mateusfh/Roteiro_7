#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H

#include "Medico.h"
#include <iostream>
using namespace std;

class Ginecologista: public Medico{
    public:
		void consulta();
		void cirurgia();
		void especializacao();
};

#endif


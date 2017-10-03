#include "TrabalhadorPorHora.h"

double TrabalhadorPorHora::calcularPagamento( int Horas ){
       int horaExtra; 
       double salHora = ((this->getSalarioMensal()/4)/40);
       double valorHoraExtra;
       if( Horas > 40){
            horaExtra = Horas - 40;
            valorHoraExtra = salHora + salHora/2;
            return ( (valorHoraExtra*horaExtra) + (40*salHora));
       }
       else{
            return (salHora*Horas);
       }
}

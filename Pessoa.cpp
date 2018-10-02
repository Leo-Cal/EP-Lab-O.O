
#include <iostream>
#include <string>
#include "Pessoa.h"
using namespace std;



Pessoa::Pessoa( string nome, double valorPorHora, int horasDiarias): nome(nome),valorPorHora(valorPorHora), horasDiarias(horasDiarias) {
}

string Pessoa :: getNome (){
    return this->nome;
}

double Pessoa :: getValorPorHora(){
    return this -> valorPorHora;
}

int Pessoa :: getHorasDiarias(){
    return this -> horasDiarias;
}

double Pessoa ::  getCusto(int dias){
    return(dias* horasDiarias * valorPorHora);
    
}

void Pessoa :: imprimir(){
    cout << nome << " - R$" << valorPorHora << " - " << horasDiarias << "h por dia" << endl;
}


Pessoa::~Pessoa() {
}


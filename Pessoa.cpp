
#include <iostream>
#include <string>
#include "Recurso.h"
#include "Pessoa.h"

#include <stdexcept>

using namespace std;



Pessoa::Pessoa( string nome, double valorPorHora, int horasDiarias): Recurso(nome),nome(nome),valorPorHora(valorPorHora), horasDiarias(horasDiarias) {
    this->usaValorPadrao = false;
    
    if(this->horasDiarias <= 0) {
        throw new invalid_argument("horasDiarias inválido");
    }
    
    if(this->valorPorHora <= 0) {
        throw new invalid_argument("valorPorHora inválido");
    }
}

Pessoa::Pessoa(std::string nome,int horasDiarias) : Recurso(nome), nome(nome),horasDiarias(horasDiarias) {
    
    this->usaValorPadrao = true;
    this->valorPorHora = Pessoa::valorPorHoraPadrao;
    
}
//string Pessoa :: getNome (){
//    return this->nome;
//}

double Pessoa :: getValorPorHora(){
    
    if(this->usaValorPadrao) {
        return Pessoa::valorPorHoraPadrao;
    }
    else{
    return this -> valorPorHora;

    }
    
 }

int Pessoa :: getHorasDiarias(){
    
    
    return this -> horasDiarias;
}

double Pessoa ::  getCusto(int dias){
    
    if(this->usaValorPadrao){
        return(dias*horasDiarias*Pessoa::valorPorHoraPadrao);
    }
    else{
    
    return(dias* horasDiarias * valorPorHora);
    }
    
}

void Pessoa :: imprimir(){
    
    if(this->usaValorPadrao){

        cout << nome << " - R$" << Pessoa::valorPorHoraPadrao << " - " << horasDiarias << "h por dia" << endl;
        
    }
    else{
    
    cout << nome << " - R$" << valorPorHora << " - " << horasDiarias << "h por dia" << endl;
    }

}



Pessoa::~Pessoa() {
}

double Pessoa::getValorPorHoraPadrao() {
    return Pessoa::valorPorHoraPadrao;
}

void Pessoa::setValorPorHoraPadrao(double valor) {
    Pessoa::valorPorHoraPadrao = valor;
}

bool Pessoa::recebeValorPadrao() {
    return this->usaValorPadrao;
}

double Pessoa::valorPorHoraPadrao = 10;


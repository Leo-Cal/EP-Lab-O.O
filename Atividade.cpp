
#include "Atividade.h"
#include "Pessoa.h"
#include <iostream>
#include <string>
#include <math.h>
#include <stdexcept>


using namespace std;

Atividade :: Atividade(string nome) : nome(nome) {
    
}

Atividade :: ~Atividade(){
    
}

string Atividade ::  getNome() {
    return this -> nome;
}

int Atividade :: getHorasNecessarias(){
    return this -> horasNecessarias;
}

void Atividade :: adicionar(Recurso* recurso){
    
    int i= 0 ;
    
    if (num_recursos == Atividade::MAX_RECURSOS) {
        throw new overflow_error("Maximo recursos atingido");
    }
    for (i = 0 ; i<num_recursos; i++) {
        if (participantes[i]->getCusto(1) == recurso->getCusto(1)  && participantes[i]->getNome() == recurso->getNome() ) {
            throw new invalid_argument("Recurso ja adicionado");
        }
    }
    
    participantes[num_recursos]  = recurso;
    num_recursos ++;
    
}

Recurso** Atividade ::  getRecursos(){
    return participantes;
    
}

int Atividade :: getQuantidadeDeRecursos(){
    return num_recursos;
}

/*
int Atividade :: getDuracao(){
    int i;
    int duracao;
    double somatorio_horas = 0;
    if (num_recursos == 0 ) {
        return -1;
    }
    for (i=0; i<num_recursos; i++) {
        somatorio_horas = somatorio_horas + (participantes[i] -> );
    }

    duracao = ceil( horasNecessarias/  somatorio_horas);
    
    return duracao;
}

double Atividade ::  getCusto(){
    
    int i;
    double custo=0;
   
    
    if(num_trabalhadores == 0 ) {
        return -1;
    }
    
    for(i=0; i < num_trabalhadores; i++) {
        custo = custo + (double) participantes[i]->getHorasDiarias() * (double) participantes[i]->getValorPorHora() * this->getDuracao();
    }
    
    return custo;
    
}



void  Atividade :: imprimir(){
    
    cout << nome << " - " << this->getDuracao() << " dias - R$" << this->getCusto() << endl;

    
}
*/


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Atividade.cpp
 * Author: leocal
 * 
 * Created on 2 de Setembro de 2018, 20:27
 */

#include "Atividade.h"
#include "Pessoa.h"
#include <iostream>
#include <string>
#include <math.h>
#define MAXIMO_RECURSOS 10

using namespace std;

Atividade :: Atividade(string nome, int horasNecessarias ) : nome(nome) , horasNecessarias(horasNecessarias) {
    
}

Atividade :: ~Atividade(){
    
}

string Atividade ::  getNome() {
    return this -> nome;
}

int Atividade :: getHorasNecessarias(){
    return this -> horasNecessarias;
}

bool Atividade :: adicionar(Pessoa* recurso){
    
    int i= 0 ;
    
    if (num_trabalhadores == MAXIMO_RECURSOS) {
        return false;
    }
    for (i = 0 ; i<num_trabalhadores; i++) {
        if (participantes[i] == recurso) {
            return false;
        }
    }
    
    participantes[num_trabalhadores]  = recurso;
    num_trabalhadores ++;
    return true;
}

Pessoa** Atividade ::  getPessoas(){
    return participantes;
    
}

int Atividade :: getQuantidadeDePessoas(){
    return num_trabalhadores;
}

int Atividade :: getDuracao(){
    int i;
    int duracao;
    int somatorio_horas;
    if (num_trabalhadores == 0 ) {
        return -1;
    }
    for (i=0; i<num_trabalhadores; i++) {
        somatorio_horas =+ participantes[i] -> getHorasDiarias();
    }
    duracao = ceil(horasNecessarias/somatorio_horas);
    
    return duracao;
}

double Atividade ::  getCusto(){
    
    int i;
    double custo;
    double somatorio_custo_diario;
    
    if(num_trabalhadores == 0 ) {
        return -1;
    }
    
    for(i=0; i< num_trabalhadores; i++) {
        custo =+ participantes[i]->getHorasDiarias() * participantes[i]->getValorPorHora() * this->getDuracao();
    }
    
    return custo;
    
}

void  Atividade :: imprimir(){
    
    cout << nome << " - " << this->getDuracao() << " dias - R$" << this->getCusto() << endl;

    
}



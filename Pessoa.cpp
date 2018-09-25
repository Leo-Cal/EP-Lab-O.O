/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pessoa.cpp
 * Author: leocal
 * 
 * Created on 2 de Setembro de 2018, 20:28
 */
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


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pessoa.h
 * Author: leocal
 *
 * Created on 2 de Setembro de 2018, 20:28
 */
#include <string>
#ifndef PESSOA_H
#define PESSOA_H

class Pessoa {
public:
Pessoa( std :: string nome, double valorPorHora, int horasDiarias);
~Pessoa();

std :: string getNome();

double getValorPorHora();

int getHorasDiarias();

double getCusto(int dias);

void imprimir();

private:
    std :: string nome;
    double valorPorHora;
    int horasDiarias;
    

};

#endif /* PESSOA_H */


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Atividade.h
 * Author: leocal
 *
 * Created on 2 de Setembro de 2018, 20:27
 */
#include <string>
#include "Pessoa.h"
#ifndef ATIVIDADE_H
#define ATIVIDADE_H
#define MAXIMO_RECURSOS 10

class Atividade {

public:
    
Atividade(std :: string nome, int horasNecessarias);

~Atividade();

std  :: string getNome();

int getHorasNecessarias();

bool adicionar(Pessoa* recurso);

Pessoa** getPessoas();

int getQuantidadeDePessoas();

int getDuracao();

double getCusto();

void imprimir();

private:
    std :: string nome;
    int horasNecessarias;
    Pessoa* participantes[MAXIMO_RECURSOS];
    int num_trabalhadores = 0;
};

#endif /* ATIVIDADE_H */


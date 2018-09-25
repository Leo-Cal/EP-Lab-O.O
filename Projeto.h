/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Projeto.h
 * Author: leocal
 *
 * Created on 2 de Setembro de 2018, 20:28
 */
#include <string>
#ifndef PROJETO_H
#define PROJETO_H
#define MAXIMO_ATIVIDADES 10

class Projeto {
public:

Projeto(std::string nome);
~Projeto();

std::string getNome();

//bool adicionar(Atividade* a);

//Atividade** getAtividades();

int getQuantidadeDeAtividades();

//bool adicionarRecurso(Pessoa* p);

//Pessoa** getPessoas();

int getQuantidadeDePessoas();

int getDuracao();

double getCusto();

void imprimir();

private:

    
};

#endif /* PROJETO_H */



#ifndef RECURSO_H
#define RECURSO_H

#include <string>





class Recurso {
public:
    Recurso(std::string nome);
    virtual ~Recurso();
    virtual std::string getNome();
    virtual double getCusto(int dias) = 0;
    virtual void imprimir() = 0;

private:
    
    std::string nome;

};

#endif /* RECURSO_H */



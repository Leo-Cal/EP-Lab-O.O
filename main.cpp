#include <iostream>
#include <string>
#include "Recurso.h"
#include "Pessoa.h"
#include "Atividade.h"
#include "Projeto.h"
#include "Ferramenta.h"


using namespace std;


int main() {

  
    string nome_projeto;
    string nome_pessoa;
    string nome_atividade;
    string add;
    int opcao;
    int valor_pessoa;
    int horas_pessoa;
    int horas_atividade;
    int i;
    int choice_pessoa;

    // TESTES 

 
    
    
 // Inicializacao do projeto:   
    cout << "Digite o nome do projeto: " ;
    cin >> nome_projeto;
    Projeto *projeto = new Projeto(nome_projeto);
 //--------
    
 // Tela do projeto
    tela_inicial:
    cout << "1 - Adicionar pessoa" << endl << "2 - Adicionar atividade" << endl << "3 - Imprimir projeto" << endl << "0 - Sair" << endl << "Escolha a opcao: ";
    cin >> opcao;
 //-----------
    
    if (opcao == 0) {
        return 0;
    }
  //Adicionar Pessoa
    if (opcao == 1) {
        cout << "Nome: ";
        cin >> nome_pessoa;
        cout << "Valor por hora (em R$): ";
        cin >> valor_pessoa;
        cout << "Horas Diarias: ";
        cin >> horas_pessoa ; 
        
        Pessoa *pessoa = new Pessoa(nome_pessoa,valor_pessoa,horas_pessoa);
        
        if (projeto->adicionarRecurso(pessoa)){
            projeto->adicionarRecurso(pessoa);  
        }
        else{
            cout << "Nao eh possivel adicionar uma nova pessoa" << endl;
        }
        goto tela_inicial;  
    
    }
  //Adicionar Atividade
    if (opcao == 2) {
        
        cout << "Nome: ";
        cin >> nome_atividade;
        cout << "Horas Necessárias: ";
        cin >> horas_atividade;
        Atividade *atividade = new Atividade(nome_atividade,horas_atividade);
        
        if(projeto->adicionar(atividade)) {
            //TELA ADICIONAR RECURSO
            cout << "Adicionado ao projeto"<<endl;
            tela_recurso:
            cout << "Deseja adicionar um recurso (s/n)? ";
            cin >> add;
            
            if (add == "s") {
                //TELA PESSOAS
                for(i=0; i < (projeto->getQuantidadeDePessoas()); i++) {
                    cout << i+1 << " - ";
                    (projeto->getPessoas())[i]->imprimir();
  
                }
                
                cout << "Escolha uma pessoa ou 0 para cancelar: ";
                cin >> choice_pessoa;
                
                if (choice_pessoa == 0) {
                    goto tela_recurso;
                }
                else{
                    if(atividade->adicionar( (projeto->getPessoas()[choice_pessoa-1]) ) ) {
                        
                        atividade->adicionar(projeto->getPessoas()[choice_pessoa-1]);
                        cout << "Adicionado à atividade" << endl;
                        goto tela_recurso;
                    }
                     else{
                        cout << "Nao foi possivel adicionar a pessoa" << endl;
                        goto tela_recurso;
                     }               
                    
                }
                      
            }
            if (add == "n") {
                goto tela_inicial;
            }
        }
        else {
            
            cout << "Nao eh possivel adicionar uma nova atividade" << endl;
            goto tela_inicial;
        }
        
    }
  //Imprimir Projeto
    if (opcao == 3) {
        projeto->imprimir();
        goto tela_inicial;
        
    }
   
   
    return 0;
}


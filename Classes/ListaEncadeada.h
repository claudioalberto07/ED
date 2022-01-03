//
// Created by SESI on 31/12/2021.
//

#ifndef ED_LISTAENCADEADA_H
#define ED_LISTAENCADEADA_H

#include <iostream>

/*
 * Lista simplesmente encadeada e tipada para inteiros.
 * logo mais adaptando para colocar tipos dinãmicos de
 * dados através do template.
 */


using namespace std;

template<class T>
class No{
private:
    T v;
    No *prox;
public:
    No(T v){
        this->prox = NULL;
        this->v = v;
    }
    T obterValor(){
        return this->v;
    }
    No* obterProx(){
        return this->prox;
    }
    void setProx(No *p){
        this->prox = p;
    }
};

template<class T>
class ListaEncadeada {
private:
    No<T> *inicio;
    No<T> *fim;
public:
    ListaEncadeada(){
        this->inicio = NULL;
        this->fim = NULL;
    }
    ListaEncadeada(T v){
        this->inicio = new No<T>(v);
        this->fim = this->inicio;
    }
    virtual ~ListaEncadeada(){
        delete inicio;
    }

    void mostrar(){
        std::cout << "Exibindo a lista: " << endl;
        No<T> *c = this->inicio;

        if(isVazia())
            std::cout << "Lista vazia!" << endl;
        else{
            while(c){
                std::cout << c->obterValor() << endl;
                c = c->obterProx();
            }
            std::cout << endl;
        }
    }

    void insertInicio(T v){
        No<T> *novoNo = new No<T>(v);
        novoNo->setProx(inicio);
        inicio = novoNo;

    }

    void insertFinal(T v){
        No<T> *novoNo = new No<T>(v);

        if(isVazia()) {
            this->inicio = novoNo;
            this->fim = novoNo;
        }
        else{
            this->fim->setProx(novoNo);
            this->fim = novoNo;
        }
    }

    bool isVazia(){
        return (inicio == NULL);
    }

    int tamanhoLista(){
        if (isVazia())
            return 0;
        No<T> *c = this->inicio;
        int tam = 0;
        do {
            c = c->obterProx();
            tam++;
        } while (c);
        return tam;
    }


    bool existValue(T v){
        No<T> *c = this->inicio;
        while (c){
            if(c->obterValor() == v)
                return true;
            c = c->obterProx();
        }
        return false;
    }

    void removeBack(){
        if(!isVazia()){
            // Se houver um elemento
            if(this->inicio->obterProx() == NULL)
                this->inicio = NULL;
            // se houver 2 elementos
            else if(this->inicio->obterProx()->obterProx() == NULL)
                this->inicio->setProx(NULL);
            // se houver mais de dois elementos
            else{
                No<T> *ant_annt = this->inicio;
                No<T> *ant = this->inicio->obterProx();
                No<T> *corrente = this->inicio->obterProx()->obterProx();

                while (corrente){
                    No<T> *aux = ant;
                    ant  = corrente;
                    ant_annt = aux;
                    corrente = corrente->obterProx();
                }
                delete ant_annt->obterProx();
                ant_annt->setProx(NULL);
                this->fim = ant_annt;
            }
        }
    }


};


#endif //ED_LISTAENCADEADA_H

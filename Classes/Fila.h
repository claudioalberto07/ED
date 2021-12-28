//
// Created by SESI on 28/12/2021.
//

#ifndef ED_FILA_H
#define ED_FILA_H

/*
 * Implementação de Fila estática com objetivo de praticar
 * a linguagem C++  com paradigma de orientação a objetos.
 */

template <class Type>

class Fila {

private:
    Type *vet;
    int inicio;
    int tamMax;
    int fim;
public:
    Fila(int tam){
        this->tamMax = tam - 1;
        this->fim = 0;
        this->inicio = 0;
        this->vet = new Type[tam];
    }
    ~Fila(){
        delete [] vet;
    }
    Type push(){
        return this->vet[inicio++];
    }
    void put(Type t){
        vet[fim++] = t;
    }

};


#endif //ED_FILA_H

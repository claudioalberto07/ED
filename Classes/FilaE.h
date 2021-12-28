//
// Created by SESI on 28/12/2021.
//

#ifndef ED_FILAE_H
#define ED_FILAE_H

/*
 * Implementação de FilaE estática com objetivo de praticar
 * a linguagem C++  com paradigma de orientação a objetos.
 */

template <class Type>

class FilaE {

private:
    Type *vet;
    int inicio;
    int tamMax;
    int fim;
public:
    FilaE(int tam){
        this->tamMax = tam - 1;
        this->fim = 0;
        this->inicio = 0;
        this->vet = new Type[tam];
    }
    ~FilaE(){
        delete [] vet;
    }
    Type push(){
        return this->vet[inicio++];
    }
    void put(Type t){
        vet[fim++] = t;
    }

};


#endif //ED_FILAE_H

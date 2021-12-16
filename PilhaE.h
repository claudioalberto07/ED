//
// Created by SESI on 16/12/2021.
//

#ifndef ED_PILHAE_H
#define ED_PILHAE_H

template <class Type>

class PilhaE {

private:
    Type * vet;
    int maxTam;
    int topo;
public:
    PilhaE(){
        topo = -1;
        vet = new int[100];
        maxTam = 99;
    }
    ~PilhaE() {
        delete []vet;
    }

    void push(Type e){
        vet[++topo] = e;
    }
    void pop(){
        topo--;
    }
    int getTopo(){
        return vet[topo];
    }

    bool vazia(){

    }

};


#endif //ED_PILHAE_H

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
    PilhaE(int tam){
        topo = -1;
        vet = new Type[tam];
        maxTam = tam-1;
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
    Type getTopo(){
        return vet[topo];
    }

    bool vazia(){
        if(topo == -1)
            return  true;
        return false;
    }

};


#endif //ED_PILHAE_H

//
// Created by SESI on 16/12/2021.
//

#ifndef ED_PILHAE_H
#define ED_PILHAE_H


class PilhaE {
private:
    int * vet;
    int maxTam;
    int topo;
public:
    PilhaE();
    ~PilhaE();
    void push(int e);
    void pop();
    int getTopo();
    bool vazia();

};


#endif //ED_PILHAE_H

//
// Created by SESI on 16/12/2021.
//

#include "PilhaE.h"

PilhaE::PilhaE() {
    topo = -1;
    vet = new int[100];
    maxTam = 99;
}

PilhaE::~PilhaE() {
    delete []vet;
}

void PilhaE::push(int e) {
    vet[++topo] = e;
}
void PilhaE::pop() {
    topo--;
}
int PilhaE::getTopo() {
    return vet[topo];
}



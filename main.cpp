#include <iostream>
#include "Classes/PilhaE.h"
#include "Classes/FilaE.h"
#include "Classes/ListaEncadeada.h"

int main() {

    PilhaE<const char*> p(20);

    p.push("claudio");
    p.push("Amanda");
    p.push("Antonio");
    p.push("Joao");
    std::cout << p.getTopo() << std::endl;
    p.pop();
    std::cout << p.getTopo() << std::endl;

    FilaE<int> fila(3);
    fila.put(5);
    fila.put(10);
    fila.put(20);

    std::cout << fila.push() << std::endl;
    std::cout << fila.push() << std::endl;
    std::cout << fila.push() << std::endl;


    ListaEncadeada l;
    if(l.isVazia())
        std::cout <<"Lista vazia" << std::endl;

    l.mostrar();
    cout << l.existValue(10) << endl;

    l.insertFinal(10);
    l.insertFinal(20);
    l.insertFinal(30);

    l.mostrar();
    cout << l.existValue(10) << endl;

    l.insertInicio(5);
    l.insertInicio(6);

    l.mostrar();
    cout << l.existValue(10) << endl;

    cout << l.tamanhoLista() << endl;

    l.removeBack();
    cout << l.tamanhoLista() << endl;
    l.mostrar();
    cout << l.existValue(10) << endl;


    return 0;
}
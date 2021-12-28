#include <iostream>
#include "Classes/PilhaE.h"
#include "Classes/FilaE.h"

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

    return 0;
}
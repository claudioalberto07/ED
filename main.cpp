#include <iostream>
#include "PilhaE.h"

int main() {

    PilhaE<const char*> p(20);

    p.push("claudio");
    p.push("Amanda");
    p.push("Antonio");
    p.push("Joao");
    std::cout << p.getTopo() << std::endl;
    p.pop();
    std::cout << p.getTopo() << std::endl;

    return 0;
}
#include <iostream>
#include "core_logic/GameSimulation.hpp"
#include "core_logic/Card.hpp"

int main() {
    GameSimulation GS;
    GS.simulateGame(1, 0.2);

    for (size_t i = 0; i < GS.shoe.size(); i++) {
       //std::cout << GS.shoe[i].rank << " " << GS.shoe[i].suit << "\n";
    }

    return 0;
}
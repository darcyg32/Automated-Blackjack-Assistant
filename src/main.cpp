#include <iostream>
#include "core_logic/GameSimulation.hpp"
#include "core_logic/Card.hpp"

int main() {
    GameSimulation GS;
    Card C(Card::ACE, Card::SPADES);

    if (C.rank == Card::ACE) {
        std::cout << "Success 4!\n";
    } else {
        std::cout << "Failure!\n";
    }
    
}
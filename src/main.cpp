#include <iostream>
#include "GameSimulation.hpp"
#include "Card.hpp"

int main() {
    GameSimulation GS;
    Card C(Card::ACE, Card::SPADES);

    if (C.rank = Card::ACE) {
        std::cout << "Success!\n";
    } else {
        std::cout << "Failure!\n";
    }
}
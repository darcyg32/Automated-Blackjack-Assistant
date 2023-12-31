#include <iostream>
#include "core_logic/GameSimulation.hpp"
#include "core_logic/Card.hpp"

int main() {
    GameSimulation GS;
    //GS.simulateGame(1, 0.2);
    GS.playerHand = {Card('K','C', 10), Card('K','C', 10), Card('K','C', 10)};
    std::cout << GS.calculateHandValue(GS.playerHand) << "\n";
    GS.playerHand = {Card('A','C', 11), Card('A','C', 11), Card('K','C', 10)};
    std::cout << GS.calculateHandValue(GS.playerHand) << "\n";

    for (size_t i = 0; i < GS.shoe.size(); i++) {
       //std::cout << GS.shoe[i].rank << " " << GS.shoe[i].suit << "\n";
    }

    return 0;
}
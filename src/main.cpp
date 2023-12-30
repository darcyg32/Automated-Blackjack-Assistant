#include <iostream>
#include "core_logic/GameSimulation.hpp"
#include "core_logic/Card.hpp"

int main() {
    GameSimulation GS;
    GS.dealCards();

    for (int i = 0; i < int(GS.deck.size()); i++) {
        //std::cout << GS.deck[i].suit << " " << GS.deck[i].rank << " " << GS.deck[i].value << "\n";
    }

    std::cout << "Player Cards:\n";
    std::cout << GS.playerHand[0].rank << GS.playerHand[0].suit << "\n";
    std::cout << GS.playerHand[1].rank << GS.playerHand[1].suit << "\n";

    std::cout << "Dealer Cards:\n";
    std::cout << GS.dealerHand[0].rank << GS.dealerHand[0].suit << "\n";
    std::cout << GS.dealerHand[1].rank << GS.dealerHand[1].suit << "\n";

    return 0;
}
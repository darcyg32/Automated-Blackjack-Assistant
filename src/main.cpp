#include <iostream>
#include "core_logic/GameSimulation.hpp"
#include "core_logic/Card.hpp"
#include "core_logic/Counter.hpp"
#include "core_logic/DecisionMaker.hpp"

int main() {
    DecisionMaker DM;
    Counter C(8);

    std::vector<char> playerHand = {'2', '8'};
    char dealerCard = '6';

    for (char c : playerHand) {
        C.updateCounts(c);
    }
    C.updateCounts(dealerCard);

    std::cout << "The player has: ";
    for (char card : playerHand) {
        std::cout << card << " ";
    }
    std::cout << std::endl;

    std::cout << "The dealer is showing: " << dealerCard << std::endl;

    std::cout << "The best strat is to: " << DM.getBestStrat(playerHand, dealerCard, C.getTrueCount()) << std::endl;
    

    return 0;
}
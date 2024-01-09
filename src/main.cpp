#include <iostream>
#include "core_logic/GameSimulation.hpp"
#include "core_logic/Card.hpp"
#include "core_logic/Counter.hpp"
#include "core_logic/DecisionMaker.hpp"

int main() {
    DecisionMaker DM;

    std::vector<char> playerHand = {'A', 'A', '2'};
    char dealerCard = '6';

    std::cout << "The player has: ";
    for (char card : playerHand) {
        std::cout << card << " ";
    }
    std::cout << std::endl;

    std::cout << "The dealer is showing: " << dealerCard << std::endl;

    std::cout << "The best strat is to: " << DM.getBestStrat(playerHand, dealerCard) << std::endl;
    

    return 0;
}
#include "GameSimulation.hpp"
#include <fstream>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <random>

GameSimulation::GameSimulation() {
    
}

void GameSimulation::initializeShoe(int numDecks) {
    // Clear shoe
    shoe.clear();

    // Card data
    std::vector<char> suits = {'C','D','H','S'};
    std::vector<char> ranks = {'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
    std::vector<int> values = {11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10};

    // Add each card to shoe
    for (int i = 0; i < numDecks; i++) {
        for (size_t j = 0; j < suits.size(); j++) {
            for (size_t k = 0; k < ranks.size(); k++) {
                shoe.push_back(Card(ranks[k], suits[j], values[k]));
            }
        }
    }
}

void GameSimulation::shuffleShoe() {
    // Randomize order of shoe
    auto rd = std::random_device {};
    auto rng = std::default_random_engine { rd() };
    std::shuffle(std::begin(shoe), std::end(shoe), rng);
}

void GameSimulation::dealCards() {
    // Clear hands
    playerHand.clear();
    dealerHand.clear();

    // Pop off and deal top cards:
    playerHand.push_back(shoe.back());
    shoe.pop_back();
    dealerHand.push_back(shoe.back());
    shoe.pop_back();
    playerHand.push_back(shoe.back());
    shoe.pop_back();
    dealerHand.push_back(shoe.back());
    shoe.pop_back();
}

void GameSimulation::playerTurn() {
    // Hit, stand, double down, etc
}

void GameSimulation::dealerTurn() {
    // Hit, stand
}

int GameSimulation::calculateHandValue(const std::vector<Card>& hand) {

    int totalValue = 0;
    int numAces = 0;
    for (size_t i = 0; i < hand.size(); i++) {
        if (hand[i].rank == 'A') {
            numAces++;
        }
        totalValue += hand[i].value;
    }

    while (totalValue > 21 && numAces > 0) {
        totalValue -= 10;
        numAces -= 1;
    }

    if (totalValue > 21) {
        return -1; // Bust
    }
    
    return totalValue;
}

void GameSimulation::simulateGame(int numDecks, double shuffleThreshold) {
    initializeShoe(numDecks);
    shuffleShoe();

    char entry;
    std::cout << "Input 'D' to deal new hands: ";
    std::cin >> entry;
    while (entry == 'D') {
        // Check shuffleThreshold
        if (shoe.size() < shuffleThreshold * numDecks * 52) {
            std::cout << "Threshold reached. Reshuffling cards.\n";
            initializeShoe(numDecks);
            shuffleShoe();
        }

        dealCards();
        std::cout << "Player Cards:\n";
        std::cout << playerHand[0].rank << playerHand[0].suit << "\n";
        std::cout << playerHand[1].rank << playerHand[1].suit << "\n";
        std::cout << "Total value: " << calculateHandValue(playerHand);
        std::cout << "\n";

        std::cout << "Dealer Cards:\n";
        std::cout << "_" << "_" << "\n";
        std::cout << dealerHand[1].rank << dealerHand[1].suit << "\n";

        // Player turn

        // Dealer turn

        // Check win/loss/push conditions

        std::cout << "Input 'D' to deal new hands: ";
        std::cin >> entry;
    }
}
#include "GameSimulation.hpp"
#include <fstream>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <random>

GameSimulation::GameSimulation() {
    initializeDeck();
}

void GameSimulation::initializeDeck() {
    std::vector<char> suits = {'C','D','H','S'};
    std::vector<char> ranks = {'A','2','3','4','5','6','7','8','9','T','J','Q','K'};
    std::vector<int> values = {11, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10};

    for (size_t i = 0; i < ranks.size(); i++) {
        for (size_t j = 0; j < suits.size(); j++) {
            deck.push_back(Card(ranks[i], suits[j], values[i]));
        }
    }

    // Shuffle deck
    shuffleDeck();
}

void GameSimulation::shuffleDeck() {
    // Randomize order of deck
    auto rd = std::random_device {};
    auto rng = std::default_random_engine { rd() };
    std::shuffle(std::begin(deck), std::end(deck), rng);
}

void GameSimulation::dealCards() {
    // Pop off and deal top cards:
    playerHand.push_back(deck.back());
    deck.pop_back();
    dealerHand.push_back(deck.back());
    deck.pop_back();
    playerHand.push_back(deck.back());
    deck.pop_back();
    dealerHand.push_back(deck.back());
    deck.pop_back();
}

void GameSimulation::playerTurn() {

}

void GameSimulation::dealerTurn() {

}

int GameSimulation::calculateHandValue(const std::vector<Card>& hand) {
    return -1;
    /*
    int handValue = 0;
    int handSize = hand.size();

    for (int i = 0; i < handSize; i++) {
        handValue += hand[i].value;
    }

    return handValue;
    */
}
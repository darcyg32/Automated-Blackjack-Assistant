#include "GameSimulation.hpp"
#include <fstream>
#include <iostream>
#include <sstream>

GameSimulation::GameSimulation() {
    initializeDeck();
    shuffleDeck();
}

void GameSimulation::initializeDeck() {
    // Open the file.
    std::ifstream cardsFile("cardsFile.txt");

    // Check if file is successfully opened.
    if (!cardsFile.is_open()) {
        std::cerr << "Error opening the cardsFile!\n";
        return;
    }

    // Read each line from the file
    std::string line;
    while (std::getline(cardsFile, line)) {
        // Separate the rank and suit
        std::istringstream iss(line);
        std::string rankStr, suitStr;

        // Read the rank and suit
        if (iss >> rankStr >> suitStr) {
            Card::Rank rank;
            Card::Suit suit;

            // Convert rank string to enum
            if (rankStr == "ACE") { 
                rank = Card::ACE;
            } else if (rankStr == "TWO") { 
                rank = Card::TWO;
            } else if (rankStr == "THREE") { 
                rank = Card::THREE;
            } else if (rankStr == "FOUR") { 
                rank = Card::FOUR;
            } else if (rankStr == "FIVE") { 
                rank = Card::FIVE;
            } else if (rankStr == "SIX") { 
                rank = Card::SIX;
            } else if (rankStr == "SEVEN") { 
                rank = Card::SEVEN;
            } else if (rankStr == "EIGHT") { 
                rank = Card::EIGHT;
            } else if (rankStr == "NINE") { 
                rank = Card::NINE;
            } else if (rankStr == "TEN") { 
                rank = Card::TEN;
            } else if (rankStr == "JACK") { 
                rank = Card::JACK;
            } else if (rankStr == "QUEEN") { 
                rank = Card::QUEEN;
            } else if (rankStr == "KING") { 
                rank = Card::KING;
            } else {
                // Handle unknown rank
                std::cerr << "Unknown rank: " << rankStr << std::endl;
                continue;
            }

            // Convert suit string to enum
            if (suitStr == "CLUBS") {
                suit = Card::CLUBS;
            } else if (suitStr == "DIAMONDS") {
                suit = Card::DIAMONDS;
            } else if (suitStr == "HEARTS") {
                suit = Card::HEARTS;
            } else if (suitStr == "SPADES") {
                suit = Card::SPADES;
            } else {
                // Handle unknown suit
                std::cerr << "Unknown suit: " << suitStr << std::endl;
                continue;
            }

            deck.push_back(Card(rank, suit));
        }
    }
}

void GameSimulation::shuffleDeck() {
    // Randomize order of deck
}

void GameSimulation::dealCards() {

}

void GameSimulation::playerTurn() {

}

void GameSimulation::dealerTurn() {

}

int GameSimulation::calculateHandValue(const std::vector<Card>& hand) {
    /*
    int handValue = 0;
    int handSize = hand.size();

    for (int i = 0; i < handSize; i++) {
        handValue += hand[i].value;
    }

    return handValue;
    */
}
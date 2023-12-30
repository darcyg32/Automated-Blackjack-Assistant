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
    // Open the file.
    std::ifstream cardsFile("src/core_logic/cardsFile.txt");

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
            char rank;
            char suit;
            int value;

            // Convert rank string to enum
            if (rankStr == "ACE") { 
                rank = 'A';
                // Value is 11, or 1 if it brings a total over 21
                value = 11;
            } else if (rankStr == "TWO") { 
                rank = '2';
                value = 2;
            } else if (rankStr == "THREE") { 
                rank = '3';
                value = 3;
            } else if (rankStr == "FOUR") { 
                rank = '4';
                value = 4;
            } else if (rankStr == "FIVE") { 
                rank = '5';
                value = 5;
            } else if (rankStr == "SIX") { 
                rank = '6';
                value = 6;
            } else if (rankStr == "SEVEN") { 
                rank = '7';
                value = 7;
            } else if (rankStr == "EIGHT") { 
                rank = '8';
                value = 8;
            } else if (rankStr == "NINE") { 
                rank = '9';
                value = 9;
            } else if (rankStr == "TEN") { 
                rank = 'T';
                value = 10;
            } else if (rankStr == "JACK") { 
                rank = 'J';
                value = 10;
            } else if (rankStr == "QUEEN") { 
                rank = 'Q';
                value = 10;
            } else if (rankStr == "KING") { 
                rank = 'K';
                value = 10;
            } else {
                // Handle unknown rank
                std::cerr << "Unknown rank: " << rankStr << std::endl;
                continue;
            }

            // Convert suit string to enum
            if (suitStr == "CLUBS") {
                suit = 'C';
            } else if (suitStr == "DIAMONDS") {
                suit = 'D';
            } else if (suitStr == "HEARTS") {
                suit = 'H';
            } else if (suitStr == "SPADES") {
                suit = 'S';
            } else {
                // Handle unknown suit
                std::cerr << "Unknown suit: " << suitStr << std::endl;
                continue;
            }

            deck.push_back(Card(rank, suit, value));
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
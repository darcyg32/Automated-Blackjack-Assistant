#ifndef GAMESIMULATION_HPP
#define GAMESIMULATION_HPP
#include "Card.hpp"
#include <vector>

class GameSimulation {
    private:
        std::vector<Card> deck;
        std::vector<Card> playerHand;
        std::vector<Card> dealerHand;

        // Function to initialize the deck
        void initializeDeck();

        // Function to shuffle the deck
        void shuffleDeck();

        // Function to deal two cards to each player and dealer
        void dealCards();

        // Function to simulate player's turn
        void playerTurn();

        // Function to simulate dealer's turn
        void dealerTurn();

        // Function to calculate the value of a hand
        int calculateHandValue(const std::vector<Card>& hand);

    public:
        // Constructor
        GameSimulation();

        // Function to simulate the game
        void simulateGame();
};

#endif
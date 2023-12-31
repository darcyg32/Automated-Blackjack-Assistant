#ifndef GAMESIMULATION_HPP
#define GAMESIMULATION_HPP
#include "Card.hpp"
#include <vector>

class GameSimulation {
    public:
        // Function to initialize the deck
        void initializeShoe(int numDecks); 

        // Function to shuffle the deck
        void shuffleShoe();

        // Function to simulate player's turn
        void playerTurn();

        // Function to simulate dealer's turn
        void dealerTurn();

        // Function to calculate the value of a hand
        int calculateHandValue(const std::vector<Card>& hand);

        std::vector<Card> shoe;
        std::vector<Card> playerHand;
        std::vector<Card> dealerHand;

        // Constructor
        GameSimulation();
 
        // Function to simulate the game
        void simulateGame(int numDecks, double shuffleThreshold);

        // Function to deal two cards to each player and dealer
        void dealCards();
};

#endif
#ifndef DECISIONMAKER_HPP
#define DECISIONMAKER_HPP
#include <vector>
#include <string>
#include <unordered_map>
#include <iostream>

class DecisionMaker {
    private:
        // Hashmap to store optimal moves based on hand type, hand, dealer's card, and current total count
        // E.g. "H_17_4_1" means the player has a hard total of 17, the dealer is showing a four, and the count is 1
        std::unordered_map<std::string, std::string> strategyTable;

        // Function to initialize strat table
        void initStrategyTable();

        // Function to classify a hand as hard, soft, or a pair
        char classifyHand(std::vector<char> hand);

        // Helper function to calculate strategyTable key
        std::string calculateKey(std::vector<char> playerHand, char dealerCard);
    public:
        DecisionMaker();

        // Function to return best strategy (optimal for 8 deck shoes)
        std::string getBestStrat(std::vector<char> playerHand, char dealerCard, int count);

        // Function to 
};

#endif
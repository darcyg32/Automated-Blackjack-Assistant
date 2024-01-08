#ifndef COUNTER_HPP
#define COUNTER_HPP
#include <vector>
#include <cmath>

class Counter {
    private:
        int runningCount;
        int totalCount;
        int numDecksInShoe;
        int numCardPlayed;
        // Hi-Lo count values
        std::vector<int> countValues = {-1,1,1,1,1,1,0,0,0,-1};
        
    public:
        // Constructor
        Counter(int numDecks);

        // Function to update total and running count based on a card
        void updateCounts(char card);

        // Functions to get counts
        int getRunningCount();
        int getTotalCount();

        // Function to convert card values into count values
        int cardValToCountVal(int cardVal);

};

#endif
#include "Counter.hpp"

Counter::Counter(int numDecks) {
    runningCount = 0;
    totalCount = 0;
    numDecksInShoe = numDecks;
    numCardPlayed = 0;
}

void Counter::updateCounts(int cardVal) {
    numCardPlayed++;
    runningCount += cardValToCountVal(cardVal);
    totalCount = runningCount / numDecksInShoe;
    
}

int Counter::getRunningCount() {
    return runningCount;
}

int Counter::getTotalCount() {
    return totalCount;
}

int Counter::cardValToCountVal(int cardVal) {
    return countValues[cardVal];
}
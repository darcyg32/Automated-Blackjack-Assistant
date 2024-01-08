#include "Counter.hpp"

Counter::Counter(int numDecks) {
    runningCount = 0;
    totalCount = 0;
    numDecksInShoe = numDecks;
    numCardPlayed = 0;
}

void Counter::updateCounts(char card) {
    if (card == 'A') {
        runningCount += cardValToCountVal(1);
    } else if (card == 'T') {
        runningCount += cardValToCountVal(10);
    } else {
        runningCount += cardValToCountVal(card - '0');
    }
    numCardPlayed++;
    totalCount = std::round(runningCount / numDecksInShoe);
}

int Counter::getRunningCount() {
    return runningCount;
}

int Counter::getTotalCount() {
    return totalCount;
}

int Counter::cardValToCountVal(int cardVal) {
    return countValues[cardVal - 1];
}
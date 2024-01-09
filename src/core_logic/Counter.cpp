#include "Counter.hpp"

Counter::Counter(int numDecks) {
    runningCount = 0;
    trueCount = 0;
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
    trueCount = std::round(runningCount / numDecksInShoe);
}

int Counter::getRunningCount() {
    return runningCount;
}

int Counter::getTrueCount() {
    return trueCount;
}

int Counter::cardValToCountVal(int cardVal) {
    return countValues[cardVal - 1];
}
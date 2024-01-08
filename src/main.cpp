#include <iostream>
#include "core_logic/GameSimulation.hpp"
#include "core_logic/Card.hpp"
#include "core_logic/Counter.hpp"

int main() {
    Counter C(8);

    std::vector<int> cardsPlayed = {'1','T','T','4'};
    for (size_t i = 0; i < cardsPlayed.size(); i++) {
        C.updateCounts(cardsPlayed[i]);
    }
    std::cout << "Running Count: " << C.getRunningCount() << std::endl;
    std::cout << "Total Count: " << C.getTotalCount() << std::endl;

    return 0;
}
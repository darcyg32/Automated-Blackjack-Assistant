#include <iostream>
#include "core_logic/GameSimulation.hpp"
#include "core_logic/Card.hpp"
#include "core_logic/Counter.hpp"

int main() {
    Counter C(8);

    std::vector<int> cardsPlayed = {1,6,8,3,7,3,10,10,10,4,2,1,1,6,8,3,7,3,10,10,10,4,2,1,1,6,8,3,7,3,10,10,10,4,2,1,1,6,8,3,7,3,10,10,10,4,2,1,1,6,8,3,7,3,10,10,10,4,2,1};
    for (size_t i = 0; i < cardsPlayed.size(); i++) {
        C.updateCounts(cardsPlayed[i]);
    }
    std::cout << "test\n";
    std::cout << "Running Count: " << C.getRunningCount() << std::endl;
    std::cout << "Total Count: " << C.getTotalCount() << std::endl;

    return 0;
}
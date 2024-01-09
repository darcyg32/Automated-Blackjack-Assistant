#include "DecisionMaker.hpp"

DecisionMaker::DecisionMaker() {
    initStrategyTable();
}

// At the moment, count isn't included
void DecisionMaker::initStrategyTable() {
    // https://bitedge.com/blog/when-to-deviate-from-blackjack-basic-strategy/ 
    // Hard totals (excluding pairs)
    strategyTable["H_21_2"] = "Stand", strategyTable["H_21_3"] = "Stand", strategyTable["H_21_4"] = "Stand", strategyTable["H_21_5"] = "Stand", strategyTable["H_21_6"] = "Stand", strategyTable["H_21_7"] = "Stand", strategyTable["H_21_8"] = "Stand", strategyTable["H_21_9"] = "Stand", strategyTable["H_21_T"] = "Stand", strategyTable["H_21_A"] = "Stand";
    strategyTable["H_20_2"] = "Stand", strategyTable["H_20_3"] = "Stand", strategyTable["H_20_4"] = "Stand", strategyTable["H_20_5"] = "Stand", strategyTable["H_20_6"] = "Stand", strategyTable["H_20_7"] = "Stand", strategyTable["H_20_8"] = "Stand", strategyTable["H_20_9"] = "Stand", strategyTable["H_20_T"] = "Stand", strategyTable["H_20_A"] = "Stand";
    strategyTable["H_19_2"] = "Stand", strategyTable["H_19_3"] = "Stand", strategyTable["H_19_4"] = "Stand", strategyTable["H_19_5"] = "Stand", strategyTable["H_19_6"] = "Stand", strategyTable["H_19_7"] = "Stand", strategyTable["H_19_8"] = "Stand", strategyTable["H_19_9"] = "Stand", strategyTable["H_19_T"] = "Stand", strategyTable["H_19_A"] = "Stand";
    strategyTable["H_18_2"] = "Stand", strategyTable["H_18_3"] = "Stand", strategyTable["H_18_4"] = "Stand", strategyTable["H_18_5"] = "Stand", strategyTable["H_18_6"] = "Stand", strategyTable["H_18_7"] = "Stand", strategyTable["H_18_8"] = "Stand", strategyTable["H_18_9"] = "Stand", strategyTable["H_18_T"] = "Stand", strategyTable["H_18_A"] = "Stand";
    strategyTable["H_17_2"] = "Stand", strategyTable["H_17_3"] = "Stand", strategyTable["H_17_4"] = "Stand", strategyTable["H_17_5"] = "Stand", strategyTable["H_17_6"] = "Stand", strategyTable["H_17_7"] = "Stand", strategyTable["H_17_8"] = "Stand", strategyTable["H_17_9"] = "Stand", strategyTable["H_17_T"] = "Stand", strategyTable["H_17_A"] = "Surrender";
    strategyTable["H_16_2"] = "Stand", strategyTable["H_16_3"] = "Stand", strategyTable["H_16_4"] = "Stand", strategyTable["H_16_5"] = "Stand", strategyTable["H_16_6"] = "Stand", strategyTable["H_16_7"] = "Hit", strategyTable["H_16_8"] = "Hit", strategyTable["H_16_9"] = "Surrender", strategyTable["H_16_T"] = "Surrender", strategyTable["H_16_A"] = "Surrender";
    strategyTable["H_15_2"] = "Stand", strategyTable["H_15_3"] = "Stand", strategyTable["H_15_4"] = "Stand", strategyTable["H_15_5"] = "Stand", strategyTable["H_15_6"] = "Stand", strategyTable["H_15_7"] = "Hit", strategyTable["H_15_8"] = "Hit", strategyTable["H_15_9"] = "Hit", strategyTable["H_15_T"] = "Surrender", strategyTable["H_15_A"] = "Surrender";
    strategyTable["H_14_2"] = "Stand", strategyTable["H_14_3"] = "Stand", strategyTable["H_14_4"] = "Stand", strategyTable["H_14_5"] = "Stand", strategyTable["H_14_6"] = "Stand", strategyTable["H_14_7"] = "Hit", strategyTable["H_14_8"] = "Hit", strategyTable["H_14_9"] = "Hit", strategyTable["H_14_T"] = "Hit", strategyTable["H_14_A"] = "Hit";
    strategyTable["H_13_2"] = "Stand", strategyTable["H_13_3"] = "Stand", strategyTable["H_13_4"] = "Stand", strategyTable["H_13_5"] = "Stand", strategyTable["H_13_6"] = "Stand", strategyTable["H_13_7"] = "Hit", strategyTable["H_13_8"] = "Hit", strategyTable["H_13_9"] = "Hit", strategyTable["H_13_T"] = "Hit", strategyTable["H_13_A"] = "Hit";
    strategyTable["H_12_2"] = "Hit", strategyTable["H_12_3"] = "Hit", strategyTable["H_12_4"] = "Stand", strategyTable["H_12_5"] = "Stand", strategyTable["H_12_6"] = "Stand", strategyTable["H_12_7"] = "Hit", strategyTable["H_12_8"] = "Hit", strategyTable["H_12_9"] = "Hit", strategyTable["H_12_T"] = "Hit", strategyTable["H_12_A"] = "Hit";
    strategyTable["H_11_2"] = "Double", strategyTable["H_11_3"] = "Double", strategyTable["H_11_4"] = "Double", strategyTable["H_11_5"] = "Double", strategyTable["H_11_6"] = "Double", strategyTable["H_11_7"] = "Double", strategyTable["H_11_8"] = "Double", strategyTable["H_11_9"] = "Double", strategyTable["H_11_T"] = "Double", strategyTable["H_11_A"] = "Double";
    strategyTable["H_T_2"] = "Double", strategyTable["H_T_3"] = "Double", strategyTable["H_T_4"] = "Double", strategyTable["H_T_5"] = "Double", strategyTable["H_T_6"] = "Double", strategyTable["H_T_7"] = "Double", strategyTable["H_T_8"] = "Double", strategyTable["H_T_9"] = "Double", strategyTable["H_T_T"] = "Hit", strategyTable["H_T_A"] = "Hit";
    strategyTable["H_9_2"] = "Hit", strategyTable["H_9_3"] = "Double", strategyTable["H_9_4"] = "Double", strategyTable["H_9_5"] = "Double", strategyTable["H_9_6"] = "Double", strategyTable["H_9_7"] = "Hit", strategyTable["H_9_8"] = "Hit", strategyTable["H_9_9"] = "Hit", strategyTable["H_9_T"] = "Hit", strategyTable["H_9_A"] = "Hit";
    strategyTable["H_8_2"] = "Hit", strategyTable["H_8_3"] = "Hit", strategyTable["H_8_4"] = "Hit", strategyTable["H_8_5"] = "Hit", strategyTable["H_8_6"] = "Hit", strategyTable["H_8_7"] = "Hit", strategyTable["H_8_8"] = "Hit", strategyTable["H_8_9"] = "Hit", strategyTable["H_8_T"] = "Hit", strategyTable["H_8_A"] = "Hit";
    strategyTable["H_7_2"] = "Hit", strategyTable["H_7_3"] = "Hit", strategyTable["H_7_4"] = "Hit", strategyTable["H_7_5"] = "Hit", strategyTable["H_7_6"] = "Hit", strategyTable["H_7_7"] = "Hit", strategyTable["H_7_8"] = "Hit", strategyTable["H_7_9"] = "Hit", strategyTable["H_7_T"] = "Hit", strategyTable["H_7_A"] = "Hit";
    strategyTable["H_6_2"] = "Hit", strategyTable["H_6_3"] = "Hit", strategyTable["H_6_4"] = "Hit", strategyTable["H_6_5"] = "Hit", strategyTable["H_6_6"] = "Hit", strategyTable["H_6_7"] = "Hit", strategyTable["H_6_8"] = "Hit", strategyTable["H_6_9"] = "Hit", strategyTable["H_6_T"] = "Hit", strategyTable["H_6_A"] = "Hit";
    strategyTable["H_5_2"] = "Hit", strategyTable["H_5_3"] = "Hit", strategyTable["H_5_4"] = "Hit", strategyTable["H_5_5"] = "Hit", strategyTable["H_5_6"] = "Hit", strategyTable["H_5_7"] = "Hit", strategyTable["H_5_8"] = "Hit", strategyTable["H_5_9"] = "Hit", strategyTable["H_5_T"] = "Hit", strategyTable["H_5_A"] = "Hit";

    // Soft Totals
    strategyTable["S_A9_2"] = "Stand", strategyTable["S_A9_3"] = "Stand", strategyTable["S_A9_4"] = "Stand", strategyTable["S_A9_5"] = "Stand", strategyTable["S_A9_6"] = "Stand", strategyTable["S_A9_7"] = "Stand", strategyTable["S_A9_8"] = "Stand", strategyTable["S_A9_9"] = "Stand", strategyTable["S_A9_T"] = "Stand", strategyTable["S_A9_A"] = "Stand";
    strategyTable["S_A8_2"] = "Stand", strategyTable["S_A8_3"] = "Stand", strategyTable["S_A8_4"] = "Stand", strategyTable["S_A8_5"] = "Stand", strategyTable["S_A8_6"] = "Double", strategyTable["S_A8_7"] = "Stand", strategyTable["S_A8_8"] = "Stand", strategyTable["S_A8_9"] = "Stand", strategyTable["S_A8_T"] = "Stand", strategyTable["S_A8_A"] = "Stand";
    strategyTable["S_A7_2"] = "Double", strategyTable["S_A7_3"] = "Double", strategyTable["S_A7_4"] = "Double", strategyTable["S_A7_5"] = "Double", strategyTable["S_A7_6"] = "Double", strategyTable["S_A7_7"] = "Stand", strategyTable["S_A7_8"] = "Stand", strategyTable["S_A7_9"] = "Hit", strategyTable["S_A7_T"] = "Hit", strategyTable["S_A7_A"] = "Hit";
    strategyTable["S_A6_2"] = "Hit", strategyTable["S_A6_3"] = "Double", strategyTable["S_A6_4"] = "Double", strategyTable["S_A6_5"] = "Double", strategyTable["S_A6_6"] = "Double", strategyTable["S_A6_7"] = "Hit", strategyTable["S_A6_8"] = "Hit", strategyTable["S_A6_9"] = "Hit", strategyTable["S_A6_T"] = "Hit", strategyTable["S_A6_A"] = "Hit";
    strategyTable["S_A5_2"] = "Hit", strategyTable["S_A5_3"] = "Hit", strategyTable["S_A5_4"] = "Double", strategyTable["S_A5_5"] = "Double", strategyTable["S_A5_6"] = "Double", strategyTable["S_A5_7"] = "Hit", strategyTable["S_A5_8"] = "Hit", strategyTable["S_A5_9"] = "Hit", strategyTable["S_A5_T"] = "Hit", strategyTable["S_A5_A"] = "Hit";
    strategyTable["S_A4_2"] = "Hit", strategyTable["S_A4_3"] = "Hit", strategyTable["S_A4_4"] = "Double", strategyTable["S_A4_5"] = "Double", strategyTable["S_A4_6"] = "Double", strategyTable["S_A4_7"] = "Hit", strategyTable["S_A4_8"] = "Hit", strategyTable["S_A4_9"] = "Hit", strategyTable["S_A4_T"] = "Hit", strategyTable["S_A4_A"] = "Hit";
    strategyTable["S_A3_2"] = "Hit", strategyTable["S_A3_3"] = "Hit", strategyTable["S_A3_4"] = "Hit", strategyTable["S_A3_5"] = "Double", strategyTable["S_A3_6"] = "Double", strategyTable["S_A3_7"] = "Hit", strategyTable["S_A3_8"] = "Hit", strategyTable["S_A3_9"] = "Hit", strategyTable["S_A3_T"] = "Hit", strategyTable["S_A3_A"] = "Hit";
    strategyTable["S_A2_2"] = "Hit", strategyTable["S_A2_3"] = "Hit", strategyTable["S_A2_4"] = "Hit", strategyTable["S_A2_5"] = "Double", strategyTable["S_A2_6"] = "Double", strategyTable["S_A2_7"] = "Hit", strategyTable["S_A2_8"] = "Hit", strategyTable["S_A2_9"] = "Hit", strategyTable["S_A2_T"] = "Hit", strategyTable["S_A2_A"] = "Hit";

    // Pairs
    strategyTable["P_AA_2"] = "Split", strategyTable["P_AA_3"] = "Split", strategyTable["P_AA_4"] = "Split", strategyTable["P_AA_5"] = "Split", strategyTable["P_AA_6"] = "Split", strategyTable["P_AA_7"] = "Split", strategyTable["P_AA_8"] = "Split", strategyTable["P_AA_9"] = "Split", strategyTable["P_AA_T"] = "Split", strategyTable["P_AA_A"] = "Split";
    strategyTable["P_TT_2"] = "Stand", strategyTable["P_TT_3"] = "Stand", strategyTable["P_TT_4"] = "Stand", strategyTable["P_TT_5"] = "Stand", strategyTable["P_TT_6"] = "Stand", strategyTable["P_TT_7"] = "Stand", strategyTable["P_TT_8"] = "Stand", strategyTable["P_TT_9"] = "Stand", strategyTable["P_TT_T"] = "Stand", strategyTable["P_TT_A"] = "Stand";
    strategyTable["P_99_2"] = "Split", strategyTable["P_99_3"] = "Split", strategyTable["P_99_4"] = "Split", strategyTable["P_99_5"] = "Split", strategyTable["P_99_6"] = "Split", strategyTable["P_99_7"] = "Stand", strategyTable["P_99_8"] = "Split", strategyTable["P_99_9"] = "Split", strategyTable["P_99_T"] = "Stand", strategyTable["P_99_A"] = "Stand";
    strategyTable["P_88_2"] = "Split", strategyTable["P_88_3"] = "Split", strategyTable["P_88_4"] = "Split", strategyTable["P_88_5"] = "Split", strategyTable["P_88_6"] = "Split", strategyTable["P_88_7"] = "Split", strategyTable["P_88_8"] = "Split", strategyTable["P_88_9"] = "Split", strategyTable["P_88_T"] = "Split", strategyTable["P_88_A"] = "Surrender";
    strategyTable["P_77_2"] = "Split", strategyTable["P_77_3"] = "Split", strategyTable["P_77_4"] = "Split", strategyTable["P_77_5"] = "Split", strategyTable["P_77_6"] = "Split", strategyTable["P_77_7"] = "Split", strategyTable["P_77_8"] = "Hit", strategyTable["P_77_9"] = "Hit", strategyTable["P_77_T"] = "Hit", strategyTable["P_77_A"] = "Hit";
    strategyTable["P_66_2"] = "Split", strategyTable["P_66_3"] = "Split", strategyTable["P_66_4"] = "Split", strategyTable["P_66_5"] = "Split", strategyTable["P_66_6"] = "Split", strategyTable["P_66_7"] = "Hit", strategyTable["P_66_8"] = "Hit", strategyTable["P_66_9"] = "Hit", strategyTable["P_66_T"] = "Hit", strategyTable["P_66_A"] = "Hit";
    strategyTable["P_55_2"] = "Double", strategyTable["P_55_3"] = "Double", strategyTable["P_55_4"] = "Double", strategyTable["P_55_5"] = "Double", strategyTable["P_55_6"] = "Double", strategyTable["P_55_7"] = "Double", strategyTable["P_55_8"] = "Double", strategyTable["P_55_9"] = "Double", strategyTable["P_55_T"] = "Hit", strategyTable["P_55_A"] = "Hit";
    strategyTable["P_44_2"] = "Hit", strategyTable["P_44_3"] = "Hit", strategyTable["P_44_4"] = "Hit", strategyTable["P_44_5"] = "Split", strategyTable["P_44_6"] = "Split", strategyTable["P_44_7"] = "Hit", strategyTable["P_44_8"] = "Hit", strategyTable["P_44_9"] = "Hit", strategyTable["P_44_T"] = "Hit", strategyTable["P_44_A"] = "Hit";
    strategyTable["P_33_2"] = "Split", strategyTable["P_33_3"] = "Split", strategyTable["P_33_4"] = "Split", strategyTable["P_33_5"] = "Split", strategyTable["P_33_6"] = "Split", strategyTable["P_33_7"] = "Split", strategyTable["P_33_8"] = "Hit", strategyTable["P_33_9"] = "Hit", strategyTable["P_33_T"] = "Hit", strategyTable["P_33_A"] = "Hit";
    strategyTable["P_22_2"] = "Split", strategyTable["P_22_3"] = "Split", strategyTable["P_22_4"] = "Split", strategyTable["P_22_5"] = "Split", strategyTable["P_22_6"] = "Split", strategyTable["P_22_7"] = "Split", strategyTable["P_22_8"] = "Hit", strategyTable["P_22_9"] = "Hit", strategyTable["P_22_T"] = "Hit", strategyTable["P_22_A"] = "Hit";

    // Deviations


}

// Function to return best strategy (optimal for 8 deck shoes)
std::string DecisionMaker::getBestStrat(std::vector<char> playerHand, char dealerCard, int count) {

    // Calculate key based on playerHand and dealerCard
    std::string key = calculateKey(playerHand, dealerCard);

    // Check if key and count matches any deviations. Might be a better way than hardcoding the cases in
    if (key == "H_16_T") {
        if (count < 0) {
            return "Hit";
        } else if (count > 0) {
            return "Stand";
        }
    }

    if (key == "H_15_T") {
        if (count < 4) {
            return "Hit";
        } else {
            return "Stand";
        }
    }

    if (key == "P_TT_5") {
        if (count < 5) {
            return "Stand";
        } else {
            return "Split";
        }
    }

    if (key == "P_TT_6") {
        if (count < 4) {
            return "Stand";
        } else {
            return "Split";
        }
    }

    if (key == "H_T_T") {
        if (count < 4) {
            return "Hit";
        } else {
            return "Double";
        }
    }

    if (key == "H_12_3") {
        if (count < 2) {
            return "Hit";
        } else {
            return "Stand";
        }
    }

    if (key == "H_12_4") {
        if (count < 3) {
            return "Hit";
        } else {
            return "Stand";
        }
    }

    if (key == "H_11_A") {
        if (count < 1) {
            return "Hit";
        } else {
            return "Double";
        }
    }

    if (key == "H_9_2") {
        if (count < 1) {
            return "Hit";
        } else {
            return "Double";
        }
    }

    if (key == "H_10_A") {
        if (count < 4) {
            return "Hit";
        } else {
            return "Double";
        }
    }

    if (key == "H_9_7") {
        if (count < 3) {
            return "Hit";
        } else {
            return "Double";
        }
    }

    if (key == "H_16_9") {
        if (count < 5) {
            return "Hit";
        } else {
            return "Stand";
        }
    }

    if (key == "H_13_2") {
        if (count < -1) {
            return "Hit";
        } else {
            return "Stand";
        }
    }

    if (key == "H_12_4") {
        if (count < 0) {
            return "Hit";
        } else {
            return "Stand";
        }
    }

    if (key == "H_12_5") {
        if (count < -2) {
            return "Hit";
        } else {
            return "Stand";
        }
    }

    if (key == "H_12_6") {
        if (count < -1) {
            return "Hit";
        } else {
            return "Stand";
        }
    }

    if (key == "H_13_3") {
        if (count < -2) {
            return "Hit";
        } else {
            return "Stand";
        }
    }

    // Find the iterator associated with the key in the strategyTable
    auto it = strategyTable.find(key);

    // Check if the key was found
    if (it != strategyTable.end()) {
        // Return the value associated with the key
        return it->second;
    } else {
        // Handle the case where the key was not found (return an appropriate value or throw an exception)
        return "Key not found"; // Example fallback value
    }

}

// Function to determine if a hand is hard, soft, or a pair
char DecisionMaker::classifyHand(std::vector<char> hand) {
    if (hand.size() == 2 && hand[0] == hand[1]) {
        return 'P';
    }

    int total = 0;
    int numAces = 0;

    for (char card : hand) {
        switch (card) {
            case '2': total += 2; break;
            case '3': total += 3; break;
            case '4': total += 4; break;
            case '5': total += 5; break;
            case '6': total += 6; break;
            case '7': total += 7; break;
            case '8': total += 8; break;
            case '9': total += 9; break;
            case 'T': total += 10; break;
            case 'J': total += 10; break;
            case 'Q': total += 10; break;
            case 'K': total += 10; break;
            case 'A': 
                total += 11;
                numAces++;
                break;
            default:
                std::cerr << "Invalid card in hand: " << card << std::endl;
                return false;
        }
    }

    // Adjust value of aces to 1 if needed to avoid busting
    while (total > 21 && numAces > 0) {
        total -= 10;
        numAces--;
    }

    if (numAces > 0) {
        return 'S';
    } else {
        return 'H';
    }
}

// Function to calculate strategyTable key
std::string DecisionMaker::calculateKey(std::vector<char> playerHand, char dealerCard) {
    std::string key = "";

    // Determine if playerHand is hard, soft, or pair
    if (classifyHand(playerHand) == 'P') {
        key.push_back('P');
        key.push_back('_');
        key.push_back(playerHand[0]);
        key.push_back(playerHand[1]);
        key.push_back('_');
    } else if (classifyHand(playerHand) == 'H') {
        key.push_back('H');
        key.push_back('_');
        int sum = 0;
        // Add special card values if needed
        for (char c : playerHand) {
            if (c == 'T' || c == 'J' || c == 'Q' || c == 'K') {
                sum += 10;
            } else if (c == 'A') {
                sum += 1;
            } else {
                sum += c - '0';
            }
        }
        if (sum == 10) {
            key.push_back('T');
        } else {
            std::string sumString = std::to_string(sum);
            for (char digit : sumString) {
                key.push_back(digit);
            }
        }
        key.push_back('_');
    } else {
        key.push_back('S');
        key.push_back('_');
        key.push_back('A');

        // Calc total of hand excluding soft ace (begin at -1)
        int sum = -1;

        for (char c : playerHand) {
            if (c == 'A') {
                sum += 1;
            } else if (c == 'T' || c == 'J' || c == 'Q' || c == 'K') {
                sum += 10;
            } else {
                sum += c - '0';
            }
        }
        if (sum == 10) {
            key.push_back('T');
        } else {
            std::string sumString = std::to_string(sum);
            for (char digit : sumString) {
                key.push_back(digit);
            }
        }
        key.push_back('_');
    }

    key.push_back(dealerCard);

    return key;
}
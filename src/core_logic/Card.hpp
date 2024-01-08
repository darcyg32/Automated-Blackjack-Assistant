#ifndef CARD_HPP
#define CARD_HPP

struct Card {

    char rank;
    char suit;
    int value;

    // Count value
    int hilow_value;

    Card(char r, char s, int v, int hl_v) : rank(r), suit(s), value(v), hilow_value(hl_v) {}
};

#endif
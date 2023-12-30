#ifndef CARD_HPP
#define CARD_HPP

struct Card {

    char rank;
    char suit;
    int value;

    Card(char r, char s, int v) : rank(r), suit(s), value(v) {}
};

#endif
#ifndef CARD_HPP
#define CARD_HPP

struct Card {

    enum Rank {
        ACE,
        TWO,
        THREE,
        FOUR,
        FIVE,
        SIX,
        SEVEN,
        EIGHT,
        NINE,
        TEN,
        JACK,
        QUEEN,
        KING
    };

    enum Suit {
        CLUBS,
        DIAMONDS,
        HEARTS,
        SPADES
    };

    Rank rank;
    Suit suit;

    Card(Rank r, Suit s) : rank(r), suit(s) {}
};

#endif
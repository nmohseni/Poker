#include <iostream>
#include "PokerHand.h"
using namespace std;

int main()
{
    int hand[5];

    cout << "Enter five numeric cards, no face cards. Use 2 - 9." << endl;
    cout << "Card 1: ";
    cin >> hand[0];
    cout << "Card 2: ";
    cin >> hand[1];
    cout << "Card 3: ";
    cin >> hand[2];
    cout << "Card 4: ";
    cin >> hand[3];
    cout << "Card 5: ";
    cin >> hand[4];

    if (containsFourOfaKind(hand))
        cout << "Four of a kind!";
    else if (containsFullHouse(hand))
        cout << "Full House!";
    else if (containsStraight(hand))
        cout << "Straight!";
    else if (containsThreeOfaKind(hand))
        cout << "Three of a kind!";
    else if (containsTwoPair(hand))
        cout << "Two Pair!";
    else if (containsPair(hand))
        cout << "Pair!";
    else
        cout << "High Card!";

    cout << endl;
}

#include <math.h>
#include "PokerHand.h"

bool containsFourOfaKind(int hand[])
{
    int same_cards = 1;
    for (int i = 0; i < 2; i++, same_cards = 1)
        for (int j = i + 1; j < 5; j++) {
            if (hand[j] == hand[i])
                same_cards++;
            if (same_cards == 4)
                return true;
        }
    return false;
}

/**
 * Checks if the hand contains a full house.
 *
 * Inputs: integer array (the hand)
 * Ouputs: Boolean
 */
bool containsFullHouse(int hand[])
{
    if (hand[0] == hand[1] && hand[2] == hand[3] && hand[3] == hand[4])
        return true;
    else if (hand[0] == hand[1] && hand[1] == hand[2] && hand[3] == hand[4])
        return true;
    return false;
}

/**
 * Checks if the hand contains a straight.
 *
 * Inputs: integer array (the hand)
 * Ouputs: Boolean
 */
bool containsStraight(int hand[])
{
    for (int i = 0; i < 5 -1; i++)
        if (hand[i] != hand[i+1] - 1)
            return false;
    return true;
}

/**
 * Checks if the hand contains three of a kind.
 *
 * Inputs: integer array (the hand)
 * Ouputs: Boolean
 */
bool containsThreeOfaKind(int hand[])
{
    int same_cards = 1;
    for (int i = 0; i < 3; i++, same_cards = 1)
        for (int j = i + 1; j < 5; j++) {
            if (hand[j] == hand[i])
                same_cards++;
            if (same_cards == 3)
                return true;
        }
    return false;
}

/**
 * Checks if the hand contains two pair.
 *
 * Inputs: integer array (the hand)
 * Ouputs: Boolean
 */
bool containsTwoPair(int hand[])
{
    bool pair1 = false;
    bool pair2 = false;

    for (int i = 0; i < 5 -1; i++)
        for (int j = i + 1; j < 5; j++){
            if (hand[i] == hand[j]) {
                if (!pair1)
                    pair1 = true;
                else
                    pair2 = true;
                break;
            }
        }
    return pair1 && pair2;
}

/**
 * Checks if the hand contains a pair.
 *
 * Inputs: integer array (the hand)
 * Ouputs: Boolean
 */
bool containsPair(int hand[])
{
    for (int i = 0; i < 5 -1; i++)
        for (int j = i + 1; j < 5; j++)
            if (hand[i] == hand[j])
                return true;
    return false;
}


#include <iostream>
#include "Blackjack_2.h"

int main()
{
    Card aceClubs(ACE, CLUBS);
    Card aceHearts(ACE, HEARTS);
    Card kingClubs(KING, CLUBS);

    Hand playerHand;
    playerHand.Add(&aceClubs);
    playerHand.Add(&aceHearts);
    playerHand.Add(&kingClubs);

    int sum = playerHand.GetValue();
    std::cout << "\n\nPlayer's hand value is: " << sum;
    playerHand.Clear();
    sum = playerHand.GetValue();
    std::cout << "\nHand cleared! New value is: " << sum;
}



#include <iostream>

using namespace std;

void PrintIntro();
string GetGuessAndPrintBack();

// Entry point for application
int main(void)
{
    PrintIntro();
    
    // Loop for the number of turns asking for guesses
    constexpr int NUMBER_OF_TERMS = 5;
    for (int i=0; i<NUMBER_OF_TERMS; i++)
    {
        GetGuessAndPrintBack();
        cout << endl;
    }
    
    return 0;
}

// Introduce the game
void PrintIntro()
{
    constexpr int WORD_LENGTH = 5;
    cout << "Welcome to Bulls and Cows, a fantasic word game.\n";
    cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of??\n";
    cout << endl;
    return;
}

// Get the guess from the player
string GetGuessAndPrintBack()
{
    string Guess = "";
    cout << "What's your guess? ";
    getline(cin, Guess);
    
    // Print the guess back to the player
    cout << "Your guess was: " << Guess << endl;
    return Guess;
}
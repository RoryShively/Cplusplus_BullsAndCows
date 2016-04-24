#include <iostream>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();


// Entry point for application
int main(void)
{
    PrintIntro();
    PlayGame();
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


// Play the game
void PlayGame()
{
    // Loop for the number of turns asking for guesses
    constexpr int NUMBER_OF_TERMS = 5;
    for (int i=0; i<NUMBER_OF_TERMS; i++)
    {
        string Guess = GetGuess();
        cout << "Your guess was: " << Guess << endl;
        cout << endl;
    }
}


// Get the guess from the player
string GetGuess()
{
    string Guess = "";
    cout << "What's your guess? ";
    getline(cin, Guess);
    return Guess;
}
#include <iostream>

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
bool AskToPlayAgain();


// Entry point for application
int main(void) {
    bool bPlayAgain = false;
    do {
        PrintIntro();
        PlayGame();
        bPlayAgain = AskToPlayAgain();
    }
    while (bPlayAgain);
    return 0;
}


// Introduce the game
void PrintIntro() {
    constexpr int WORD_LENGTH = 5;
    cout << "Welcome to Bulls and Cows, a fantasic word game.\n";
    cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of??\n";
    cout << endl;
    return;
}


// Play the game
void PlayGame() {
    // Loop for the number of turns asking for guesses
    constexpr int NUMBER_OF_TERMS = 5;
    for (int i=0; i<NUMBER_OF_TERMS; i++) {
        string Guess = GetGuess();
        cout << "Your guess was: " << Guess << endl;
        cout << endl;
    }
}


// Get the guess from the player
string GetGuess() {
    string Guess = "";
    cout << "What's your guess? ";
    getline(cin, Guess);
    return Guess;
}


bool AskToPlayAgain() {
    string Response = "";
    cout << "Do you want to play again? (Y/n)";
    getline(cin, Response);
    cout << endl;
    if(Response[0] == 'y' || Response[0] == 'Y') {
        return true;
    } else if(Response[0] == 'n' || Response[0] == 'N') {
        return false;
    } else {
        return AskToPlayAgain();
    }
}
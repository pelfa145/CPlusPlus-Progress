#include <iostream>
#include <ctime>

int main(){
using namespace std;
bool guessiscorrect = false;
int tries;
int guess;
    srand(time(NULL));

    int randint = (rand() % 100)+1;
    while(!guessiscorrect){
        cout << "Enter your guess: ";
        cin >> guess;
        tries ++;
        if(!checkIfCorrect(guess, randint)){
            guess < randint? cout << "Try again. Higher" << endl : cout << "Try again. Lower" << endl;
            continue;
        }
        else{
            cout << "You got it right! after " << tries << " guesses! " << guess;
            guessiscorrect = true;
        }
    }
    return 0;
}

bool checkIfCorrect(int number, int randint){
    
    if(randint == number){
        return 1;
    }

    return false;
}
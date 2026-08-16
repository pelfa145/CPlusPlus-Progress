#include <iostream>
#include <ctime>

int main(){
using namespace std;
    srand(time(NULL));

    int randnum = (rand() % 5)+1;

    switch(randnum){
        case 1:cout << "You got sum shit!"; break;
        case 2:cout << "You got sum poopoo!"; break;
        case 3:cout << "You got sum doodoo!"; break;
        case 4:cout << "You got sum stuff!"; break;
        case 5:cout << "You got sum PUSSAYYY!"; break;
    }
}
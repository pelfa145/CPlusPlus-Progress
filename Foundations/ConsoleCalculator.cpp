#include <iostream>

int main(){
using namespace std;

    char op;
    double first;
    double second;

    cout << "Enter the first digit: ";
    cin >> first;
    cout << "Enter operator: ";
    cin >> op;
    cout << "Enter second digit: ";
    cin >> second;

    switch(op){
        case '+':
            cout << "Total: "<< first + second;
            break;
        case '-':
            cout << "Total: "<< first - second;
            break;
        case '*':
            cout << "Total: "<< first * second;
            break;
        case '/':
            cout << "Total: "<< first / second;
            break;
        default:
            cout << "Only correct operators.";
    }
    return 0;
}
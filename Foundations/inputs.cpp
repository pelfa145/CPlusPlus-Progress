#include <iostream>

int main(){
using namespace std;
    int age;
    string name;
    cout << "Whats your age: ";
    cin >> age;
    cout << "Hello! What is your name: ";
    getline(cin >> ws, name);
    
    age = (int)age;
    cout << "Hello, " << name << "! You are " << age << " years old!";
    return 0;
}
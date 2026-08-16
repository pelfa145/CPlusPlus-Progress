#include <iostream>

int main(){
using namespace std;
    int age;
    string name;
    
    cout << "Hello! What is your name: ";
    getline(cin >> ws, name);
    
    cout << "Whats your age: ";
    cin >> age;
    
    age = (int)age;
    cout << "Hello, " << name << "! You are " << age << " years old!";
    return 0;
}
#include <math.h>
#include <iostream>

int main(){
    
    double a;
    double b; 
    

    std::cout << "Enter value of a: ";
    std::cin >> a;
    std::cout << "Enter value of b: ";
    std::cin >> b;

    double c = sqrt(pow(a,2) + pow(b,2));
    
    std::cout << "Side C: " << c;
    return 0;
}
#include <iostream>

int main() {
    int temp;
    std::cout << "Enter your temperature: ";
    std::cin >> temp;
    // Write code here
    if (temp >=100) {
        std::cout << "You have a fever. 🤒\n";
    }
    else{
        std::cout << "You do not have a fever.🕺\n";
    }
}
  


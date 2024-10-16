#include <iostream>
#include <string>
using namespace std;
int main() {
    while (true) {
        cout << "myshell> "; // Display prompt
        string input; // Variable to hold user input
        getline(std::cin, input); // Read user input

        if (input == "exit" || input == "quit") {
            break; // Exit the shell if user types exit or quit
        }
    
    }
    return 0;
}

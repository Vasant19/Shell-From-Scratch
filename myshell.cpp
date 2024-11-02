#include <iostream>
#include <string>
using namespace std;
int main() {
    while (true) {
        cout << "myshell> "; // Display prompt
        string input; // Variable to hold user input
        getline(cin, input); // Read user input

        if (input == "exit" || input == "quit" || input == "q") {
            break; // Exit the shell if user types exit or quit
        }
    
    }
    return 0;
}

// Example usage "ping google.com"

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <windows.h>

using namespace std;

// Function to split input string into command and arguments
vector<string> parseInput(const string& input) {
    vector<string> args;
    stringstream ss(input);
    string token;
    while (ss >> token) {
        args.push_back(token);
    }
    return args;
}

// Function to execute external commands in Windows
void executeCommand(const vector<string>& args) {
    // Construct command line string from arguments
    string commandLine;
    for (const auto& arg : args) {
        commandLine += arg + " ";
    }

    // Initialize STARTUPINFO and PROCESS_INFORMATION
    STARTUPINFO si;
    PROCESS_INFORMATION pi;
    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    ZeroMemory(&pi, sizeof(pi));

    // Create the process
    if (!CreateProcess(
        NULL,                           // No module name (use command line)
        &commandLine[0],                // Command line
        NULL,                           // Process handle not inheritable
        NULL,                           // Thread handle not inheritable
        FALSE,                          // Set handle inheritance to FALSE
        0,                              // No creation flags
        NULL,                           // Use parent's environment block
        NULL,                           // Use parent's starting directory 
        &si,                            // Pointer to STARTUPINFO structure
        &pi)                            // Pointer to PROCESS_INFORMATION structure
    ) {
        cerr << "Error: Unable to start process. Error code: " << GetLastError() << endl;
        return;
    }

    // Wait until the process completes
    WaitForSingleObject(pi.hProcess, INFINITE);

    // Close process and thread handles
    CloseHandle(pi.hProcess);
    CloseHandle(pi.hThread);
}

int main() {
    while (true) {
        cout << "myshell> "; // Display prompt
        string input;
        getline(cin, input); // Read user input

        // Exit if user types exit, quit, or q
        if (input == "exit" || input == "quit" || input == "q") {
            break;
        }

        // Parse the input
        vector<string> args = parseInput(input);
        
        // If input is empty, continue to next iteration
        if (args.empty()) {
            continue;
        }

        // Execute command
        executeCommand(args);
    }

    return 0;
}


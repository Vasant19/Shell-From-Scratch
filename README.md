# This repository contains my solution to the [Codecrafters Shell Challenge](https://codecrafters.io/).
![image](https://github.com/user-attachments/assets/04ec60a9-03ce-4701-829e-b2016a846a36)

It's a minimal shell implemented from scratch that can execute commands, handle processes, and offer basic shell functionalities. 

## Overview

The goal of this project is to build a simple shell from scratch, which can serve as a reference for others looking to understand how shells work internally. This project goes through various stages of shell development, from process creation to signal handling.

## Features

- Command execution (e.g., `ls`, `pwd`, etc.)
- Process management (forking and execution using `execvp`)
- Redirection of input/output
- Simple piping (`|` operator)
- Signal handling (e.g., `Ctrl+C` to terminate processes)

## Getting Started

### Installation

Clone the repository:

```bash
git clone https://github.com/Vasant19/Shell-from-Scratch.git
cd Shell-from-Scratch
```
Run the shell:

bash
Copy code
./my_shell
Usage
Once the shell is running, you can type commands like:

bash
Copy code
$ ls -l
$ pwd
$ echo "Hello, World!"
$ cat file.txt

### Roadmap
  ☑️Basic command execution
  ☑️Handle multiple arguments
  ☑️Implement piping (|)
  ☑️Input/output redirection (>, <)
  ☑️ Background process handling (&)
  ☑️ Support for environment variables
  ☑️Implement built-in commands (cd, exit, etc.)

### Contributing
Contributions are welcome! Please feel free to submit pull requests or open issues for any bug fixes or improvements. Here's how you can contribute:
Fork the repository
Create a new branch (git checkout -b feature-branch)
Commit your changes (git commit -m 'Add some feature')
Push to the branch (git push origin feature-branch)
Open a pull request

#### License : MIT (OS)


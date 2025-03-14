#include <iostream>
using namespace std;

char ReadChar() {
    char c;
    cout << "Enter a character: ";
    cin >> c;
    return c;
}

void PrintChar(char c) {
    cout << "The character is: " << c << endl;
}

int main() {
    char c = ReadChar();
    PrintChar(c);
    return 0;
}


/*
C++ Program Requirements Template

1. Program Name:

2. Program Objective:
   - Describe the main purpose and functionality of the program.

3. Input Requirements:
   - Describe the input data the program will receive.
     - Data types (int, float, double, string, etc.)
     - Ranges or constraints on the input values
     - Source of input (user input, file, database, etc.)

4. Output Requirements:
   - Describe the output the program will generate.
     - Data types of the output
     - Format of the output (text, numerical, graphical, etc.)
     - Destination of the output (console, file, database, etc.)

5. Processing Requirements:
   - Describe the key algorithms, calculations, or logic the program will perform.
   - Highlight any specific mathematical, statistical, or analytical requirements.
   - Identify any performance or efficiency requirements (e.g., real-time processing, high-throughput, etc.).

6. User Interface Requirements:
   - Describe how the user will interact with the program.
     - Command-line interface, graphical user interface (GUI), web-based, etc.
     - Specific input/output formats, menus, dialogs, etc.

7. Non-Functional Requirements:
   - Describe any additional requirements, such as:
     - Security (e.g., authentication, authorization, data encryption)
     - Reliability (e.g., error handling, fault tolerance)
     - Scalability (e.g., handling large data sets, concurrent users)
     - Maintainability (e.g., modular design, documentation)
     - Platform compatibility (e.g., Windows, Linux, macOS)

8. Additional Notes or Comments:
   - Provide any other relevant information or requirements not covered above.


*/
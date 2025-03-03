#include <iostream>
using namespace std;

// Declaració de funcions
int add(int a, int b);
void printMessage();

int main() {
    int num1, num2, sum;

    cout << "Digues dos nombres: ";
    cin >> num1 >> num2;

    // Calling the add function
    //
    sum = add(num1, num2);

    // Displaying the result
    cout << "Sum: " << sum << endl;

    // Calling the printMessage function
    printMessage();

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}

// Function definition
void printMessage() {
    cout << "This is a simple function example in C++." << endl;
}
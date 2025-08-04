//Prathyush Nimmagadda
//24070123064
//ENTC A3
#include <iostream>
using namespace std;

int main() {
    float i, j;
    char op;
    cout << "Enter first number: ";
    cin >> i;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> j;
    switch(op) {
        case '+':
            cout << "Result: " << i + j << endl;
            break;
        case '-':
            cout << "Result: " << i - j << endl;
            break;
        case '*':
            cout << "Result: " << i * j << endl;
            break;
        case '/':
            if (j != 0)
                cout << "Result: " << i / j << endl;
            else
                cout << "Error: Division by zero!" << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }
    return 0;
}

//Prathyush Nimmagadda
//24070123064
//ENTC A3
#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    cout << "Enter third number: ";
    cin >> z;
    int largest;
    if (x >= y && x >= z) {
        largest = x;
    } else if (y >= x && y >= z) {
        largest = y;
    } else {
        largest = z;
    }
    cout << "The largest number is: " << largest << endl;
    return 0;
}

//Prathyush Nimmagadda
//24070123064
//ENTC A3
#include <iostream>
using namespace std;

int main() {
    int city;
    cout <<"1.Thimphu"<< endl <<"2.Amsterdam"<< endl <<"3.Copenhagen"<< endl 
         <<"4.Tokyo"<< endl <<"5.Kuwait"<< endl <<"6.Doha"<< endl 
         <<"7.Dubai"<< endl <<"8.London"<< endl <<"9.Auckland"<< endl 
         <<"10.Frankfurt"<< endl;
    cout << "Enter your choice: ";
    cin >> city;
    switch(city) {
        case 1:
            cout << "You selected Thimphu." << endl;
            break;
        case 2:
            cout << "You selected Amsterdam." << endl;
            break;
        case 3:
            cout << "You selected Copenhangen." << endl;
            break;
        case 4:
            cout << "You selected Tokyo." << endl;
            break;
        case 5:
            cout << "You selected Kuwait." << endl;
            break;
        case 6:
            cout << "You selected Doha." << endl;
            break;
        case 7:
            cout << "You selected Dubai." << endl;
            break;
        case 8:
            cout << "You selected London." << endl;
            break;
        case 9:
            cout << "You selected Auckland." << endl;
            break;
        case 10:
            cout << "You selected Frankfurt." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}

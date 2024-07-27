//1. Program to convert Nepalese Currency (Rupees and Paisa) to US 
//Currency (Dollar and Cents). (Rs. 98.51=1$)
#include <iostream>
using namespace std;

class Money {
    int rupees, paisa;
    double total, dollar;
public: 
    void setData() {
        cout << "Enter the Nepalese currency:" << endl;
        cout << "Rupees: ";
        cin >> rupees;
        cout << "Paisa: ";
        cin >> paisa;
    }

    // Overloading the type conversion operator to convert Money to double (USD)
    operator double() { 
        if (paisa >= 100) {
            rupees += paisa / 100;
            paisa = paisa % 100;
        }
        total = rupees + paisa / 100.0;
        dollar = total / 98.51;
        return dollar;
    }

    void display(double USD) {
        int integerDollar = static_cast<int>(USD);
        int cents = static_cast<int>((USD - integerDollar) * 100);
        cout << rupees << " Rupees " << paisa << " Paisa = ";
        cout << integerDollar << " Dollar and " << cents << " Cents" << endl;
    }
};

int main() {
    double USD;
    Money NEPTOUSD;
    NEPTOUSD.setData();
    USD = NEPTOUSD; // Implicit conversion using the overloaded operator
    NEPTOUSD.display(USD); 
    return 0;
}

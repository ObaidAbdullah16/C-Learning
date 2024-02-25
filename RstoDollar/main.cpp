#include <iostream>

using namespace std;

int main() {
    
    cout << "Welcome to Rupees to dollar convertor !" << endl;
    
    const double rupees {0.012};
    
    cout << "Enter the number in Rupees : Rs. ";
    
    double rs {0};
    double dollar {0};
    
    cin >> rs;
    
    dollar = rs*rupees;
    
    cout << "Your money in dollar is : $" << dollar;
    
    return 0;
}
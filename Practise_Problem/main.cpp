#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    // Volume of sphere ....
//    cout << "This program is created to calculate the volume of sphere" << endl;
//    
//    cout << "Enter radius : ";
//    double radius {0};
//    cin >> radius;
//    double volume {0};
//    volume = ((double)4/3)*3.14*pow(radius, 3);
//    cout << "Volume : " << volume;
    
    // Convert celsius to fehranite ...
//    cout << "This program is created to convert celsius to fehrenhiet" << endl;
//    
//    cout << "Enter temperature in celsius : ";
//    double celsius {0};
//    cin >> celsius;
//    double fehrn {0};
//    fehrn = (1.8*celsius) + 32;
//    cout << "Fahrenheit : " << fehrn;


    // Program to convert dollar to peso...
    
//    cout << "This program is to convert dollar to peso " << endl;
//    
//    cout << "Enter money in dollars : $" ;
//    double dollar {0};
//    cin >> dollar;
//    const double peso {55.93};
//    dollar *= peso;
//    cout << "money in peso : " << dollar << " peso";

    // Program converting inch to centimeter ...
    
//    cout << "This program is for converting inch to centimeter" << endl;
//    
//    cout << "Enter in inch : ";
//    double inch {0};
//    cin >> inch;
//    const double centi {2.54};
//    inch *= centi;
//    cout << inch << " cm";

    // Program for exchanging values of given number...
    
//    cout << "This program is created to exchange the entered digits" << endl;
//    
//    cout << "Enter a digit x : ";
//    double x{0};
//    double y{0};
//    double z{0};
//    cin >> x;
//    cout << "Enter a digit y : ";
//    cin >> y;
//    cout << "Values of x and y before exchanging : " << "\n" << "x = " << x << "\n" << "y = " << y << endl;
//    z = x;
//    x = y;
//    y = z;
//    
//    cout << "Values of x and y after exchanging : " << "\n" << "x = " << x << "\n" << "y = " << y  << endl;

    // Program for calculating circumference of a circle...
    
//    cout << "Program for calculating circumference of a circle" << endl;
//    
//    cout << "Enter radius r : ";
//    double radius {0};
//    double circumference {0};
//    cin >> radius ;
//    circumference = 2*3.1416*radius;
//    cout << "Circumference : " << circumference;

    // Program for calculating depreciation of item ...
    
//    cout << "Program for calculating yearly depreciation of item" << endl;
//    
//    double price {0};
//    double years {0};
//    double salvage_value {0};
//    double depreciation {0};
//    
//    cout << "Enter the price of item(P) : ";
//    cin >> price;
//    cout << "Enter the expected number of years of service(Y) : ";
//    cin >> years;
//    cout << "Enter its expected salvage value(S) : ";
//    cin >> salvage_value;
//    depreciation = (price - salvage_value)*years;
//    
//    cout << "The yearly depreciation of item(D) is : " << depreciation;
    
    // Program for exchanging values of given number without using a third variable...
    
//    cout << "This program is created to exchange the entered digits" << endl;
//   
//    cout << "Enter a digit x : ";
//    double x{0};
//    double y{0};
//    cin >> x;
//    cout << "Enter a digit y : ";
//    cin >> y;
//    cout << "Values of x and y before exchanging : " << "\n" << "x = " << x << "\n" << "y = " << y << endl;
//
//    x += y;
//    y = x-y;
//    x -= y;
//
//    cout << "Values of x and y after exchanging : " << "\n" << "x = " << x << "\n" << "y = " << y  << endl;

    // Program for calculating radius of circle giver its area ...
    
    cout << "Program for calculating radius of circle giver its area" << endl;
    cout << "Enter area of circle(A) : " ;
    double area{0}, radius{0};
    const double pi {3.14};
    cin >> area;
    radius = pow(area/pi, 0.5);
    cout << "Radius of the circle = " << radius;
    
    return 0;
    }
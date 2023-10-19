#include <iostream>
using namespace std;

int main() {
    const double pie = 3.142;


    // 1. Calculate the volume of a cylinder
    double radius, height, volume;
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;
    
    volume = pie * radius * radius * height;
    cout << "The volume of the cylinder is: " << volume << endl;

    


    //  2. Calculate the volume of a cube
    double length; 
    cout << "Enter the length  of the cube sides: ";
    cin >> length;

    volume = length * length * length;
    cout << "The volume of the cube is: " << volume << endl ;
    


 
    // 3. Calculate the volume of a sphere
    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    volume = (4.0 / 3.0) * pie * radius * radius * radius;

    cout << "The volume of the sphere is: " << volume << endl;


    
    
    // 4. Converting a given number into hours and minutes
    int total_minutes;
    cout << "Enter the total number of minutes: ";
    cin >> total_minutes;

    // Calculating hours and minutes
    int hours = total_minutes / 60;
    int minutes = total_minutes % 60;

    // Output in the format of hours:minutes
    cout << "Time: " << hours << ":" << minutes << endl;




    //5. convert temperature in Kelvin to Fahrenheit
    double kelvin, fahrenheit;
    cout << "Enter the temperature in kelvin: ";
    cin >> kelvin;

    fahrenheit = (kelvin - 273.15) * 9/5 + 32;
    cout << "The temperature in Fahrenheit is: " << fahrenheit << endl;









    //6. solving simultaneous equations
    double a, b, c, d, e, f;

    // Input coefficients
    cout << "Enter the coefficients of the first equation (a, b, c): ";
    cin >> a >> b >> c;

    cout << "Enter the coefficients of the second equation (d, e, f): ";
    cin >> d >> e >> f;

    // Calculate the determinants
    double determinant = a * e - b * d;
    double determinantX = c * e - b * f;
    double determinantY = a * f - c * d;

    // Check for a unique solution
    if (determinant != 0) {
        double x = determinantX / determinant;
        double y = determinantY / determinant;
        cout << "value of X:  = " << x << ", Y = " << y << endl;
    } else {
        if (determinantX == 0 && determinantY == 0) {
            cout << "Infinite possible values." << endl;
        } else {
            cout << "No solution." << endl;
        }
    }
}




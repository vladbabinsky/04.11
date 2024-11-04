#include <iostream>

int main() {
    /*task 1*/
    using namespace std;

    double R1 = 2;
    double R2 = 6;
    double R3 = 12;

    double R0_inv = (1 / R1) + (1 / R2) + (1 / R3);
    double R0 = 1 / R0_inv;

    cout << "R0 = " << R0 << endl;

    /*task 2*/

    double pi = 3.14;
    double L = 10;
    double R = L / (2 * pi);
    double S_circle = pi * R * R;
    cout << "Radius = " << R << endl;
    cout << "Circle Area = " << S_circle << endl;

    /*task 3*/

    double v = 5;
    double t = 2;
    double a = 3;
    
    double S1 = v * t;
    double S2 = (a * t * t) / 2;
    double S = S1 + S2;

    cout << "Distance S = " << S << endl;
}

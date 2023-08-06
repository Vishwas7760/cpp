#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, d, e, f;
    cout << "Enter the coefficients of the first equation (ax + by = c): ";
    cin >> a >> b >> c;
    cout << "Enter the coefficients of the second equation (dx + ey = f): ";
    cin >> d >> e >> f;

    double x = (e*c - b*f) / (a*e - b*d);
    double y = (c - a*x) / b;

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;

    return 0;
}
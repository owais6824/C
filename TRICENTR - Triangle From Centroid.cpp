
// ID = 22
// Name = Triangle From Centroid

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int interval;
    cout << "Enter the intervals : ";
    cin >> interval;
    while(interval != 0){
    double  o,a, b, c, s, area, h;
    cout << "Enter the length of side a: ";
    cin >> o;
    cout << "Enter the distances from the centroid to side a : ";
    cin >> a;
    cout << "Enter the distances from the centroid to side b : ";
    cin >> b;
    cout << "Enter the distances from the centroid to side c : ";
    cin >> c;

    // Calculate the semi-perimeter of the triangle
    s = (o + a + b + c) / 2.0;

    // Calculate the area of the triangle using Heron's formula
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Calculate the distance from the orthocenter to the centroid
    h = (2.0/3.0) * sqrt(b * b + c * c - a * a/4.0);

    cout << "\nArea of the triangle: " << area << endl;
    cout << "\nDistance from the orthocenter to the centroid: " << h << endl;
    cout << "_________________________________________________________\n\n";
    interval--;
    }

    return 0;
}

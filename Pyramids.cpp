
// ID = 23
// Name = Pyramids

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    int interval;
    cout << "Enter the interval:";
    cin >> interval;

    for (int i = 0; i < interval; i++) {
        double AB, AC, AD, BC, BD, CD;
        cout << "Enter the values:";
        cin >> AB >> AC >> AD >> BC >> BD >> CD;

        // calculate the semi-perimeter of the base
        double s = (AB + AC + BC + CD) / 2.0;

        // calculate the area of the base using Heron's formula
        double area = sqrt((s - AB) * (s - AC) * (s - BC) * (s - CD));

        // calculate the height using the Pythagorean theorem
        double height = 2.0 * area / AB;

        // calculate the volume using the formula (1/3) * area of base * height
        double volume = (1.0 / 3.0) * area * height;

        // output the volume with 4 decimal digits
        cout << fixed << setprecision(4) << volume << endl;
    }

    return 0;
}


// ID = 24
// Name = Small Factorial

#include <iostream>

using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main() {
    int interval;
    cout << "Enter the interval: ";
    cin >> interval;
    while(interval != 0){
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Error: Input must be a positive integer." << endl;
        return 0;
    } else {
        int result = factorial(n);
        cout << n << "! = " << result << endl;
        cout << "__________________________\n";
    }
    interval--;
    }
        return 0;

}

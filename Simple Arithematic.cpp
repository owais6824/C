
// ID = 6
// Name = Simple Arithematic

#include <iostream>

using namespace std;

int main() {
    int interval;
    int num1, num2;
    char op;
    cout << "Enter the intervals :";
    cin>> interval;
    while(interval != 0){
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    double result;

    switch(op) {
        case '+':
            {
            result = num1 + num2;
            cout << "            " << num1  << endl;
            cout << "            " << num2  << endl;
            cout << "        ---------"<<endl;
            cout << "            " << result  << endl;
            cout << "_____________________________\n" << endl;
            }
            break;
        case '-':
            {
            result = num1 - num2;
            cout << "            " << num1  << endl;
            cout << "            " << num2  << endl;
            cout << "        ---------"<<endl;
            cout << "            " << result  << endl;
            cout << "_____________________________\n"<<endl;
            }
            break;
        case '*':
           {
            result = 0;
            int i = 0;
            while(num2 > 0) {
                double digit = num2 % 10;
                num2 /= 10;
                double partialResult = num1 * digit;
                for(int j = 0; j < i; j++) {

                    partialResult *= 10;
                }
                result += partialResult;
                i++;
            }
            cout << "            " << num1  << endl;
            cout << "            " << num2  << endl;
            cout << "        ---------"<<endl;
            cout << "            " << result  << endl;
            cout << "_____________________________\n"<<endl;
           }
            break;
        case '/':
            {
            result = num1 / num2;
            cout << "            " << num1  << endl;
            cout << "            " << num2  << endl;
            cout << "        ---------"<<endl;
            cout << "            " << result  << endl;
            cout << "_____________________________\n"<<endl;
            }
            break;
        default:
            cout << "\nInvalid operator" << endl;
            cout << "_____________________________\n"<<endl;
            break;
    }
    interval--;
    }

    return 0;
}

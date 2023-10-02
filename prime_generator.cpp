
// ID = 2
// Name = Prime Generator


#include <iostream>
#include <cstring>
using namespace std;

bool is_prime(int n) {
    if(n == 2 || n == 3)
        return true;
    if(n == 1 || n % 2 == 0)
        return false;
    for(int i = 3; i * i <= n; i += 2)
        if(n % i == 0)
            return false;
    return true;
}

int main() {
    int t, m, n;
    cout << "Enter the intervals: ";
    cin >> t;
    while(t--) {
        cout << "Enter the starting number: ";
        cin >> m;
        cout << "Enter the ending number: ";
        cin >> n;
        bool primes[n - m + 1];
        memset(primes, true, sizeof(primes));
        for(int i = 2; i * i <= n; i++) {
            for(int j = max(i * i, (m + i - 1) / i * i); j <= n; j += i)
                primes[j - m] = false;
        }
        for(int i = max(2, m); i <= n; i++)
            if(primes[i - m] && is_prime(i))
                cout << i << endl;
                cout << "_____________________________"<< endl;
    }
    return 0;
}

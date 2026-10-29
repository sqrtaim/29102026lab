#include <iostream>
using namespace std;

int minOperations(int n) {
    int ops = 0;
    while (n > 0) {
        if (n % 2 == 0) n /= 2;
        else if (n % 4 == 1) { n--; ops++; }
        else { n++; ops++; }
    }
    return ops;
}

int main() {
    int n;
    cin >> n;
    cout << minOperations(n);
}
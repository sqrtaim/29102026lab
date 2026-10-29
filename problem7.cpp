#include <iostream>
using namespace std;

int brokenCalc(int startValue, int target) {
    int ops = 0;
    while (target > startValue) {
        if (target % 2 == 0) target /= 2;   
        else target += 1;                   
        ops++;
    }
    return ops + (startValue - target);
}

int main() {
    int startValue, target;
    cin >> startValue >> target;
    cout << brokenCalc(startValue, target) << endl;
}
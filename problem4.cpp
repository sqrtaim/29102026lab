#include <iostream>
using namespace std;

void printRepeat(char c, int times);

int main() {
    int n, k;
    cin >> n >> k;
    int extra = k - n; 
    int zs = extra / 25;
    int rem = extra % 25;
    int middle = (rem > 0) ? 1 : 0;
    int as = n - zs - middle;
    printRepeat('a', as);
    if (rem > 0) {
        cout << static_cast<char>('a' + rem);
    }
    printRepeat('z', zs);
    cout << endl;
    return 0;
}

void printRepeat(char c, int times) {
    for (int i = 0; i < times; i++) {
        cout << c;
    }
}
#include <iostream>
using namespace std;
bool hasAlternatingBits(int n);
int main() {
int n;
cin >> n;
cout << (hasAlternatingBits(n) ? "true" : "false") << endl;
return 0;
}

bool hasAlternatingBits(int n) {
int prev = n % 2;
n /= 2;
while (n > 0) {
int cur = n % 2;
if (cur == prev) {
return false;    //equal neighbours
 }
prev = cur;
n /= 2;
 }
return true;
}

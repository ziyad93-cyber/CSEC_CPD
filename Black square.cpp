#include <iostream>
#include <string>
using namespace std;
int main() {
int z[4];
for (int i = 0; i < 4; i++) {
cin >> z[i];
}
string s;
cin >> s;
int toCal = 0;
for (char c : s) {
toCal += z[c - '1'];
}
cout << toCal << endl;
return 0;

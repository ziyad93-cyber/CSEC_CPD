#include <iostream>
using namespace std;

int main() {
    string s, z;
    cin >> s >> z;
    int position = 1;
    for (char instruction : z) {
        if (position <= s.size() && s[position - 1] == instruction) {
            position++;
        }
    }
    cout << position << endl;
    return 0;
}

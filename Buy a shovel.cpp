#include <iostream>
using namespace std;
int main() {
    int z,r;
    cin>>z>>r;
    int n = 1;
    while (true) {
        int to=n * z;
        if (to%10== 0 || to% 10 == r) {
            cout<<n<<endl;
            break;
        }
        n++;
    }
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int power(int base, int exp) {
    return pow(base, exp);
}
int main(){

    cout << "Power: " << power(2, 3) << endl;

    return 0;
}
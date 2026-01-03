#include <iostream>
#include <cmath>
using namespace std;

int power(int base, int exp) {
    return pow(base, exp);
}
int modulo(int a, int b) {
    return a % b;
}
int main(){

    cout << "Power: " << power(2, 3) << endl;
    cout << "Modulo: " << modulo(10, 3) << endl;
    return 0;
}
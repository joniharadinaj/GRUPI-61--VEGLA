#include <iostream>
#include <cmath>
using namespace std;

int power(int base, int exp) {
    return pow(base, exp);
}
int modulo(int a, int b) {
    return a % b;
}
int maxNumber(int a, int b) {
    return (a > b) ? a : b;
}
int minNumber(int a, int b) {
    return (a < b) ? a : b;
}
int main(){

    cout << "Power: " << power(2, 3) << endl;
    cout << "Modulo: " << modulo(10, 3) << endl;
    cout << "Max: " << maxNumber(10, 5) << endl;
    cout << "Min: " << minNumber(10, 5) << endl;
    return 0;
}
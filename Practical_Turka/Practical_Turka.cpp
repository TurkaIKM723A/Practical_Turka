#include <iostream>

using namespace std;

int sum(int a, int b) {

    return a + b;

}

int main() {

    setlocale(LC_CTYPE, "ukr");

    int num1, num2;

    cout << "¬ведiть перше  число: "; 
    cin >> num1;

    cout << "¬ведiть друге число: ";
    cin >> num2;

    cout << "—ума чисел " << num1 << " i " << num2 << " дорiвнюЇ: " << sum(num1, num2) << '\n';

    return 0;
}

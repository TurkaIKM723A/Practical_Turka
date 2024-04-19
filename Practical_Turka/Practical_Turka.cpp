#include <iostream>

using namespace std;

int factorial(int n) {
    
    if (n == 0)

        return 1;

    return n * factorial(n - 1);
}

int main() {

    int num;

    cout << "Write your number: ";
    cin >> num;

    cout << "The factorial of a number " << num << " is: " << factorial(num) << '\n';

    return 0;
}


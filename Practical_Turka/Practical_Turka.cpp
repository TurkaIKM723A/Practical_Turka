#include <iostream>

using namespace std;

int sum(int a, int b) {

    return a + b;

}

int main() {

    setlocale(LC_CTYPE, "ukr");

    int num1, num2;

    cout << "����i�� �����  �����: "; 
    cin >> num1;

    cout << "����i�� ����� �����: ";
    cin >> num2;

    cout << "���� ����� " << num1 << " i " << num2 << " ���i����: " << sum(num1, num2) << '\n';

    return 0;
}

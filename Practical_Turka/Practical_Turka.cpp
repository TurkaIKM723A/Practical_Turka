#include <iostream>

using namespace std;

int sumArray(int arr[], int size) {

    int sum = 0;

    for (int i = 0; i < size; ++i) {

        sum += arr[i];

    }

    return sum;
}

int main() {

    const int SIZE = 5;
    int array[SIZE] = { 1, 2, 3, 4, 5 }; 

    
    cout << "The sum of array elements: " << sumArray(array, SIZE) << '\n';

    return 0;
}




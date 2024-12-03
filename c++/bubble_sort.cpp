#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 2, 3, 4, 5, 6, 7, 8, 9, 1};

    for (unsigned long long i = 0; i < (sizeof(arr) / sizeof(arr[0]) - 1); i++) {
        for (unsigned long long j = 0; j < (sizeof(arr) / sizeof(arr[0]) - 1 - i); j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (unsigned long long i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

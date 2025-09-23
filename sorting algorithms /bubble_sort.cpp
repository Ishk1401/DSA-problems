#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n) {
    for (int i = n - 1; i > 0; --i) {
        bool didSwap = false;
        for (int j = 0; j < i; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didSwap = true;
            }
        }
        if (!didSwap) break;   // already sorted
    }

    cout << "sorting done.....\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int n;
    cout << "Enter the size:\n";
    cin >> n;

    /* dynamically allocated an array of size n, added
    line because complier was showing problems in my code
    and giving the warnings of "ISO C++ forbids variable 
    length array"*/ 
    int* arr = new int[n];  

    cout << "Enter the numbers:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Here is the input that you gave:\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    bubble_sort(arr, n);
    return 0;
}

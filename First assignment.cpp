#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 3, 8, 1, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min_value = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] < min_value) {
            min_value = arr[i];
        }
    }

    cout << "The smallest number is: " << min_value << endl;
    return 0;
}

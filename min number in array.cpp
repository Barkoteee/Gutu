#include <iostream>
#include <climits>  

using namespace std;

int main() {
    int n;

   
    cout << "Enter the number of elements in the array: ";
    cin >> n;


    int arr[n];

  
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    int smallest = INT_MAX;

  
    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "The smallest number in the array is: " << smallest << endl;

    return 0;
}
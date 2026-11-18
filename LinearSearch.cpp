#include <iostream>
using namespace std;

int main() {
    int a[20], n, key, pos = -1;

    cout << "Enter the number of elements: ";
    cin >> n;
    if (n < 1 || n > 20) {
        cout << "Please enter a number between 1 and 20." << endl;
        return 1;
    }

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Enter the element to be searched: ";
    cin >> key;
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            pos = i;
            break;
        }
    }

    if (pos != -1) {
        cout << "Element found at position " << pos + 1 << "." << endl;
    } else {
        cout << "Element not found in the list." << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

class SelectionSort {
    int a[100], n, i, j, pos, temp;

public:
    void getData() {
        cout << "Enter the number of elements: ";
        cin >> n;
        cout << "Enter " << n << " elements:" << endl;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
    }

    void sort() {
        for (i = 0; i < n - 1; i++) {
            pos = i;
            for (j = i + 1; j < n; j++) {
                if (a[j] < a[pos]) {
                    pos = j;
                }
            }
            temp = a[i];
            a[i] = a[pos];
            a[pos] = temp;
        }
    }

    void display() {
        cout << "The sorted elements using the Selection Sort technique are:" << endl;
        for (i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    SelectionSort S;
    S.getData();
    S.sort();
    S.display();
    return 0;
}

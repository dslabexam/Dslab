#include <iostream>
using namespace std;

void TOH(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        cout << "Move Disk 1 from " << source << " to " << destination << endl;
    } else {
        TOH(n - 1, source, destination, auxiliary);
        cout << "Move Disk " << n << " from " << source << " to " << destination << endl;
        TOH(n - 1, auxiliary, source, destination);
    }
}

int main() {
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive number of disks." << endl;
        return 1;
    }

    cout << endl;
    cout << "Steps to solve Towers of Hanoi:" << endl;
    TOH(n, 'A', 'B', 'C');
    return 0;
}

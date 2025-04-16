#include <iostream>

using namespace std;

void left_pyramid(int n);
void right_pyramid(int n, int h);

int main () {
    int height;
    cout << "Height of the pyramid: ";
    cin >> height;

    left_pyramid(height);
    cout << "-------------------------" << endl;
    right_pyramid(height, height);
    return 0;
}

void left_pyramid(int n) {
    if (n <= 0) {
        return;
    }

    left_pyramid(n - 1);

    for (int i = 0; i < n; i++) {
        cout << "#";
    }
    cout << endl;
}

void right_pyramid (int n, int h) {
    if (n <= 0) {
        return;
    }

    right_pyramid(n - 1, h);

    cout << string(h - n, ' ');

    for (int k = 0; k < n; k++) {
        cout << "#";
    }
    cout << endl;
}
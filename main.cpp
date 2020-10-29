#include <iostream>
using namespace std;

int main() {
    int num = 0;
    int num0 = 0;
    int num1 = 1;

    cin >> num;

    if (num >= 10000) {
        num = num - 1000;
        cout << num << " " << num0;
    } else if (num >= 9000) {
        num = num - 900;
        cout << num << " " << num1;
    } else if (num >= 8000) {
        num = num - 800;
        cout << num << " " << num0;
    } else if (num >= 7000) {
        num = num - 700;
        cout << num << " " << num1;
    } else if (num >= 6000) {
        num = num - 600;
        cout << num << " " << num0;
    } else if (num >= 5000) {
        num = num - 500;
        cout << num << " " << num1;
    } else if (num >= 4000) {
        num = num - 400;
        cout << num << " " << num0;
    } else if (num >= 3000) {
        num = num - 300;
        cout << num << " " << num1;
    } else if (num >= 2000) {
        num = num - 200;
        cout << num << " " << num0;
    } else if (num >= 1000) {
        num = num - 100;
        cout << num << " " << num1;
    } else {
        num = num;
        cout << num << " " << num0;
    }

}

using namespace std;
#include <iostream>
#include <fstream>
#include <array>
//8


int main(int argc, char* argv[])
{
    int n, i=0;
    cin >> n;
    if (n > 46) {
        cout << "sorry, but we have only 46 numbers" << endl;
        n = 46;
    }
    array<int, 46> arr = {};
    int a = 1, b = 1;
    if (n >= 1) {
        arr[i] = a;
        i++;
    }
    while (i < n) {
        arr[i] = b;
        i++;
        swap(a, b);
        b += a;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
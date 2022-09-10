#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //2
    cout << "Hello World!\n";
    //3
    for (int i = 1; i < 30; i++) {
        cout << i << ' ';
    }
    cout << endl;
    //4
    //ifstream in_file("input.txt");
    ofstream out_file("output.txt");
    for (int i = 1; i <= 30; i++) {
        out_file << i << ' ';
    }
    out_file << endl;
    out_file.close();
    //5
    int n;
    cin >> n;
    out_file.open("output.txt");
    for (int i = 0; i <= n; i++) {
        out_file << i << ' ';
    }
    out_file.close();
}
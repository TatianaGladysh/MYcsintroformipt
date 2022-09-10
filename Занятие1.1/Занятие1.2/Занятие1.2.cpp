using namespace std;
#include <iostream>
#include <fstream>
//6
int main(int argc, char* argv[])
{
    for (int i = 0; i < argc; i++) {
        // Выводим список аргументов в цикле
        cout << "Argument " << i << " : " << argv[i] << endl;
    }
    int n=std::atoi(argv[1]), i=0;
    ofstream out_file("output.txt");
    long long a = 1, b = 1;
    out_file << "номер:  число:" << endl;
    if (n >= 1) {
        i++;
        out_file << i << " " << a << endl;
    }
    while (i< n) {
        i++;
        out_file << i << " " << b << endl;
        swap(a, b);
        b += a;
    }
    out_file.close();
    return 0;
}
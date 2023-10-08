#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> aves = { "Loro gris", "Paloma de diamante", "Coctel" };
    cout << "Los valores del vector antes de insertar:\n";
    for (int i = 0; i < aves.size(); ++i) {
        cout << aves[i] << "\n";
    }

    aves.push_back("Mavna");
    aves.push_back("Periquitos");
    aves.push_back("Cacatua");

    cout << "Los valores del vector despues de insertar:\n";
    for (int i = 0; i < aves.size(); ++i) {
        cout << aves[i] << "\n";
    }

    return 0;
}

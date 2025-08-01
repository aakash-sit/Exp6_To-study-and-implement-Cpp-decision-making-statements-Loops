#include <iostream>
using namespace std;

int main() {
    
    cout << "=== Simple Pyramid ===" << endl;
    
    int rows = 5;
    
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    
    cout << endl;
    
    cout << "=== Flipped Pyramid ===" << endl;
    
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= rows - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}

#include <iostream>

using namespace std;

void multiPrint(int n, char c);

int main() {
    multiPrint(5, 'T');  // Call multiPrint to print 5 '%' characters
    cout << endl;  // Print a newline to separate output

    return 0;
}

void multiPrint(int n, char c) {
    for (int i = 0; i < n; i++) {
        cout << c << " ";  // Print the character followed by a space
    }
}

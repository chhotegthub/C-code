#include <iostream>
using namespace std;

int main() {
    int N, X;
    cout<<"enter the size and key for you  want to search ";
    cin >> N >> X;
    
    bool found = false; // Flag to indicate if X is found
    cout<<"enter the element in the";
    for (int i = 0; i < N; i++) {
        int element;
        cin >> element;
        if (element == X) {
            found = true;
            break;
        }
    }
    
    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}


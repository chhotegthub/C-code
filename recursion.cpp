#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
    if (n <= 1 || n<=0)
        return 1; // Base case: factorial of 0 or 1 is 1
    else
        return factorial(n - 1)+ factorial(n-2); // Recursive case
}

int main() {
    int num = factorial(1);
    cout<<num;

    return 0;
}

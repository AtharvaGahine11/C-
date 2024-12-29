#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer (n): ";
    cin >> n;

    if (n < 1) {
        cout << "Please enter a number greater than or equal to 1." << endl;
        return 1;
    }

    int evenSum = 0;
    long long oddProduct = 1; 

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            evenSum += i;
        } else {
            oddProduct *= i;
        }
    }

    cout << "Sum of all even numbers between 1 and " << n << ": " << evenSum << endl;
    cout << "Product of all odd numbers between 1 and " << n << ": " << oddProduct << endl;

    return 0;
}

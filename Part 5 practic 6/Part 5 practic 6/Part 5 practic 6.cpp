#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double sum = 0.0;  
    int n = 1;  
    double term;  

    do {
        term = 1.0 / n;  
        sum += term;  
        n++;  
    } while (term >= 1e-5);  

    cout << "Sum of the series is: " << sum << endl;
    cout << "Number of terms: " << n - 1 << endl;

    return 0;
}
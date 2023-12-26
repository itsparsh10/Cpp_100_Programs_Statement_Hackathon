#include <iostream>
using namespace std;

 int main() {
    unsigned long int i, n, factorial = 1;

    cout<<"Enter a positive integer: ";
    cin>>n;

    for (i = 1; i <= n; ++i) {
        factorial *= i;   // factorial = factorial * i;
    }
    cout<< "Factorial of "<<n<<" = "<<factorial;
    
	return 0;
}

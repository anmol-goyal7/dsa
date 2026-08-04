#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    for (int i = 1; i <= sqrt(n);i++) {
        if (n%i == 0){
            std::cout << i;
        }
        if ((n/i)!= 1)
            std::cout << n/i;
    }
}

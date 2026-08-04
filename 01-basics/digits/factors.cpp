#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cin >> n;
    for (int i = 1; i <= sqrt(n); i++ )
    {
        if (n%i== 0) {
            std::cout << i << "\n";
            if ((n/i)!= i)
                std::cout << (n/i) << "\n";
        }
    }
}

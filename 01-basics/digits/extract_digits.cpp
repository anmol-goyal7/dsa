#include <iostream>
int main() {
    int n, w, last_digit;
    std::cin >> n;
    
    while (n>0) {
        last_digit = n % 10;
        
        n = n/10;
        
        std::cout << last_digit;
    }
}

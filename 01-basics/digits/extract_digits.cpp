#include <iostream>
int main() {
    int n, last_digit, count{0};
    std::cin >> n;
     
    while (n>0) {
        last_digit = n % 10;
        count = count + 1;
        n = n/10;
        
        std::cout << last_digit;
    }
    std::cout << std::endl;
    std::cout << count << std::endl;
}

#include <iostream>
int main() {
    int n, last_digit, count{0}, revN{0};
    std::cin >> n;
     
    while (n>0) {
        last_digit = n % 10;
        count = count + 1;
        n = n/10;
        revN = (revN*10) + last_digit;
    }
    std::cout << revN;
    std::cout << std::endl;
    std::cout << "Number of Digits: " << count << std::endl;
}

#include <iostream>
int main() {
    int n, last_digit, count{0}, revN{0};
    std::cin >> n;
    int temp{n};     
    while (n>0) {
        last_digit = n % 10;
        count = count + 1;
        n = n/10;
        revN = (revN*10) + last_digit;
    }
    if (temp==revN) {
        std::cout << "This digit is a palindrome." << std::endl;
    }
    else
    {
        std::cout << "This is not a palindrome." << std::endl;
    }
}

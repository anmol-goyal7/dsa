#include <iostream>
int main() {
    int n, sum{0}, last_digit;
    std::cin >> n;
    int temp{n};

    while (n>0) {
        last_digit = n % 10;
        n = n/10;
        sum = sum + last_digit*last_digit*last_digit;
    }
    if (temp == sum) {
        std::cout << "This digit is an armstrong." << std::endl;
    }
    else
    {
        std::cout << "This digit is not an armstrong." << std::endl;
    }

}

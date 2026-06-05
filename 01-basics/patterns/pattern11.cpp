#include <iostream>
int main() {
    for (int i = 1; i <= 5; i++) {
        int val = i%2; 
        for (int j = 1; j <=i; j++) {
        std::cout << val; 
        val = 1 - val;
    }
        std::cout << std::endl;
    }
}

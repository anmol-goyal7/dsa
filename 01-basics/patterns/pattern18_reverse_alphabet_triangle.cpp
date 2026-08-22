#include<iostream>
int main() {
    char ch = 'E';
    for (int i = 0; i< 5; i++) {
        for (int j = 0; j<= i ; j++) {
            std::cout << char((ch - i) + j) << " ";
    }
    std::cout << std::endl;
    }
}

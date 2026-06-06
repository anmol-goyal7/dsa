#include <iostream>
int main() {
    char ch = 'A';
    for (int i = 5; i >= 0; i--) {
        for (int j = 0; j < i; j++){
        
            std::cout << char(ch + j);
        }
        std::cout << std::endl;
    }
}

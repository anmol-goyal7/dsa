#include <iostream>
int main() {
    char ch = 'A';
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++){
        
            std::cout << char(ch + i);
        }
        std::cout << std::endl;
    }
}

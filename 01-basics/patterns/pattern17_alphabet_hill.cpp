#include <iostream>
int main() {
    char ch = 'A';
    char ch2 = 'D';
    for (int i = 1;i <= 4; i++) {
        
        for (int j = 0; j < 4-i; j++) {
            std::cout << " ";
        }

        for (int k = 0;k<i;k++) {

            std::cout << char(ch +k);
        }
        
        for (int l = i - 2; l>=0; l--) {
            std::cout << char(ch+ l);
        }

        std::cout << std::endl;
    }
}

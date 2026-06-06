#include <iostream>
int main()
{
    for (int i = 1; i <= 4; i++) {
        
        for (int k = 1; k <=i;k++){
            std::cout << k;
        }
        for (int j = 0; j < 2 * (4 - i); j++){
            std::cout << " ";
        } 
        for (int l = i;l >=1;l--){

            std::cout << l; 
        }

        std::cout << std::endl;
    }
}

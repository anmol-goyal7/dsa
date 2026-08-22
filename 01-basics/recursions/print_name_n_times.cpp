#include <iostream>

void f(int i,int n) {
    if (i > n)
        return;
    std::cout << "yo\n";
    f(i+1,n);
}
int main() {
    int n;
    std::cin >> n;
    f(1,n);
    std::cout << std::endl;
}

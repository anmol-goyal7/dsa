
#include <iostream>

void f(int i,int n) {
    if (i < 1)
        return;
    std::cout << i << "\n";
    f(i-1,n);
}
int main() {
    int n;
    std::cin >> n;
    f(n,n);
    std::cout << std::endl;
}


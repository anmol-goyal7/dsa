#include <iostream>
#include <cmath>

int n;
int cnt(int n) {
    int count = (int)log10(n) + 1;
    return count;
}

int main() {
    std::cin >> n;
    std::cout << cnt(n) << "\n";
}


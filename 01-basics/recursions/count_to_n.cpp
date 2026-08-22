#include<iostream>

int f(int i, int n) {
    if (i < n) {
        i=i+1;
        return i;
    }
    else {
        return 0;
    }
    f(i,n);
}

int main() {
    int n;
    std::cin >> n;
    f(1,n);
    std::cout << n;
}

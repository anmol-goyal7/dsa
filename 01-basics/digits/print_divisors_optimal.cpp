#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> ls;
    for (int i = 1; i*i <= n; i++ )
    {
        if (n%i== 0) {
            ls.push_back(i);
            if ((n/i)!= i) {
                ls.push_back(n/i);
            }
        }
    }
    std::sort(ls.begin(), ls.end());
    for(auto it : ls) std::cout << it << " ";
}

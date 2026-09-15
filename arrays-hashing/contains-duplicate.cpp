#include <iostream>
#include <vector>

bool hasDuplicate(std::vector<int> &nums) {

  int n = nums.size();
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      if (nums[i] == nums[j]) {
        return true;
      }
    }
  }

  return false;
}

int main() {
  std::vector<int> a = {1, 4, 2, 5, 6, 2};
  std::vector<int> b = {1, 2, 3, 4};
  std::vector<int> c = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
  std::vector<int> d = {1};

  std::cout << hasDuplicate(a) << hasDuplicate(b) << hasDuplicate(c)
            << hasDuplicate(d) << "\n";
}

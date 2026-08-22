#include <iostream>

int find_largest(int arr[], int n) {
  int largest = arr[0];
  for (int i = 0; i < n; i++) {
    if (arr[i] > largest)
      largest = arr[i];
  }
  std::cout << largest << '\n';

  return 0;
}

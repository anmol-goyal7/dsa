#include <bits/stdc++.h>

using namespace std;

// need to sort the array first so creating a function to sort the array

int sortArr(vector<int> &arr) {

  sort(arr.begin(), arr.end());

  return arr[arr.size() - 1];
}

int main() {
  vector<int> arr1 = {4, 5, 3, 6, 8, 1, 5};
  cout << "largest element in arr1: " << sortArr(arr1) << endl;
}

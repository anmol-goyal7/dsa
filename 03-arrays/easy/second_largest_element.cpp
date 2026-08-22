#include <bits/stdc++.h>

using namespace std;

// need to sort the array first so creating a function to sort the array

int sortArr(vector<int> &arr) {

  sort(arr.begin(), arr.end());
  while (arr[arr.size() - 1] == arr[arr.size() - 2]) {
    arr.pop_back();
  }

  return arr[arr.size() - 1];
}

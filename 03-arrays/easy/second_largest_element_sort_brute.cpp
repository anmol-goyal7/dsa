class Solution {
public:
  int secondLargestElement(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int largest = nums[n - 1];
    for (int i = n - 2; i >= 0; i--) {
      if (nums[i] != largest) {
        return nums[i];
      }
    }
    return -1;
  }
};

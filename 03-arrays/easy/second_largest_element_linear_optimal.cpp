int second_largest(vector<int> nums) {
  int largest = INT_MIN;
  int second = INT_MIN;

  for (int i = 0; i < nums.size(); i++) {
    if (nums[i] > largest) {
      second = largest;
      largest = nums[i];
    } else if (nums[i] > second && nums[i] != largest) {
      second = nums[i];
    }
  }
  return second == INT_MIN ? -1 : second;
};

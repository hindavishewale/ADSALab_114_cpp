#include <iostream>
#include <vector>
using namespace std;

int findMinimum(vector<int>& nums) {
    int low = 0;
    int high = nums.size() - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] < nums[high]) {
            high = mid;
        } else if (nums[mid] > nums[high]) {
            low = mid + 1;
        } else {
            // nums[mid] == nums[high], unsure — reduce high safely
            high--;
        }
    }

    return nums[low];
}

int main() {
    vector<int> nums = {2, 2, 2, 0, 1};  // You can change this test case
    int minimum = findMinimum(nums);
    cout << "Minimum element is: " << minimum << endl;
    return 0;
}
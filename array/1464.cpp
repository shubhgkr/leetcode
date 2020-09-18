/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 9/18/20.
 * Problem link: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/
 */


#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	int maxProduct(vector<int> &nums) {
		sort(nums.rbegin(), nums.rend());
		return (nums[0] - 1) * (nums[1] - 1);
	}
};

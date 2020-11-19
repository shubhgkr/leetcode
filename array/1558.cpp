/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/19/20.
 * Problem link: https://leetcode.com/problems/sum-of-all-odd-length-subarrays/
 */

#include <vector>
#include <cmath>

class Solution {
public:
	int sumOddLengthSubarrays(std::vector<int>& arr) {
		int ans = 0,n=arr.size(),i;
		for(i =0;i<n;i++)
		{
			int contribution = std::ceil((i+1)*(n-i)/2.0);
			ans+=(contribution*arr[i]);
		}
		return ans;
	}
};

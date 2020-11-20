/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/20/20.
 * Problem link: https://leetcode.com/problems/squares-of-a-sorted-array/
 */

#include<vector>
#include<cmath>

class Solution {
public:
	std::vector<int> sortedSquares(std::vector<int> &A) {
		std::vector<int> ans(A.size());
		int start = 0;
		int end = A.size() - 1;
		int curr = end;
		while (start <= end) {
			if (std::abs(A[start]) > std::abs(A[end])) {
				ans[curr] = A[start] * A[start];
				start++;
			} else {
				ans[curr] = A[end] * A[end];
				end--;
			}
			curr--;
		}
		return ans;
	}
};

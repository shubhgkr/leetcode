/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 9/18/20.
 * Problem link: https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/
 */

#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	vector<int> sumZero(int n) {
		vector<int> ans;
		if (n & 1)
			ans.push_back(0);
		for (int i = 1; i <= n / 2; i++) {
			ans.push_back(i);
			ans.push_back(-i);
		}
		sort(ans.begin(), ans.end());
		return ans;
	}
};

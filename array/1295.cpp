/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 9/17/20.
 * Problem link: https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
 */

#include <vector>
#include <string>

using namespace std;

class Solution {
public:
	int findNumbers(vector<int> &nums) {
		int cnt = 0;
		for (int num:nums) {
			string s = to_string(num);
			if (s.length() % 2 == 0)
				cnt++;
		}
		return cnt;
	}
};

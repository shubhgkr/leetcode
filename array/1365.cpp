/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 9/10/20.
 * Problem link: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
 */

#include <vector>
#include <map>

using namespace std;

class Solution {
public:
	vector<int> smallerNumbersThanCurrent(vector<int> &nums) {
		map<int, int> mp;
		for (int i:nums)
			mp[i]++;
		vector<int> ans;
		for (int i:nums) {
			int sum = 0;
			for (auto it = mp.begin(); it != mp.end(); it++) {
				if ((*it).first < i)
					sum += (*it).second;
				else
					break;
			}
			ans.push_back(sum);
		}
		return ans;
	}
};

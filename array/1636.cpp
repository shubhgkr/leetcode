/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/8/20.
 * Problem link: https://leetcode.com/problems/sort-array-by-increasing-frequency/
 */

#include<map>
#include<vector>
#include<algorithm>

class Solution {
	static int cmp(std::pair<int, int> &a, std::pair<int, int> &b) {
		if (a.second == b.second)
			return a.first > b.first;
		return a.second < b.second;
	}

public:
	std::vector<int> frequencySort(std::vector<int> &nums) {
		std::map<int, int> f_map;
		std::vector<int> sol;

		for (int i = 0; i < nums.size(); i++)
			f_map[nums[i]]++;
		std::vector <std::pair<int, int>> Temp;
		for (auto &it : f_map)
			Temp.push_back(it);
		sort(Temp.begin(), Temp.end(), cmp);
		for (auto &it : Temp)
			for (int i = 0; i < it.second; i++)
				sol.push_back(it.first);
		return sol;
	}
};

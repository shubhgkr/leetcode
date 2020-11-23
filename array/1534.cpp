/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/23/20.
 * Problem link: https://leetcode.com/problems/count-good-triplets/
 */

#include<vector>
#include<cmath>

class Solution {
public:
	int countGoodTriplets(std::vector<int> &arr, int a, int b, int c) {
		int cnt = 0;
		for (int i = 0; i < arr.size(); i++) {
			for (int j = i + 1; j < arr.size(); j++) {
				for (int k = j + 1; k < arr.size(); k++) {
					if (std::abs(arr[i] - arr[j]) <= a && std::abs(arr[k] - arr[j]) <= b &&
						std::abs(arr[i] - arr[k]) <= c)
						cnt++;
				}
			}
		}
		return cnt;
	}
};

/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/13/20.
 * Problem link: https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/
 */

#include<unordered_set>

class Solution {
public:
	int countPrimeSetBits(int L, int R) {
		int cnt = 0;
		std::unordered_set<int> mp{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
		for (int i = L; i <= R; i++) {
			if (mp.find(__builtin_popcount(i)) != mp.end())
				cnt++;
		}
		return cnt;
	}
};

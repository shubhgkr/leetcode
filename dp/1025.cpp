/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 8/22/20.
 * Problem link: https://leetcode.com/problems/divisor-game/
 */

class Solution {
public:
	bool divisorGame(int N) {
		return !(N & 1);
	}
};

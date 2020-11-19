/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/19/20.
 * Problem link: https://leetcode.com/problems/bitwise-and-of-numbers-range/
 */
 
class Solution {
public:
	int rangeBitwiseAnd(int m, int n) {
		int cnt=0;
		while(m!=n){
			m>>=1;
			n>>=1;
			cnt++;
		}
		return m<<cnt;
	}
};

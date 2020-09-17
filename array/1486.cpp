/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 9/17/20.
 * Problem link: https://leetcode.com/problems/xor-operation-in-an-array/
 */

class Solution {
public:
	int xorOperation(int n, int start) {
		int ans=0;
		for(int i=0;i<n;i++){
			ans^=(start+2*i);
		}
		return ans;
	}
};

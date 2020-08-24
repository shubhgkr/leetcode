/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 8/24/20.
 * Problem link: https://leetcode.com/problems/n-th-tribonacci-number/
 */

#include <vector>

using namespace std;
vector<int> ans;

class Solution {
public:
	void recursion(int n) {
		if (ans.size() <= n) {
			recursion(n - 3);
			recursion(n - 2);
			recursion(n - 1);
			ans.push_back(ans[n - 3] + ans[n - 2] + ans[n - 1]);
		}
	}

	int tribonacci(int n) {
		ans.clear();
		ans.push_back(0);
		ans.push_back(1);
		ans.push_back(1);
		recursion(n);
		return ans[n];
	}
};

/*
 * Using dp: Time complexity->O(n) Space Complexity->O(n)
 * class Solution {
 * public:
 *     int tribonacci(int n) {
 *         int arr[38];
 *         arr[0]=0;
 *         arr[1]=arr[2]=1;
 *         for(int i=3;i<=37;i++)
 *             arr[i]=arr[i-3]+arr[i-2]+arr[i-1];
 *         return arr[n];
 *     }
 * };
 *
 * We can reduce space complexity to O(1) by using cyclic switching just like in fibonacci series.
 * */

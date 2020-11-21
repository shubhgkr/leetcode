/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/21/20.
 * Problem link: https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/
 */
 
 #include<vector>
#include<stack>

class Solution {
public:
	std::vector<int> finalPrices(std::vector<int> &prices) {
		std::stack<int> stk;
		for (int i = prices.size() - 1; i >= 0; i--) {
			while (stk.size() > 0 && stk.top() > prices[i])
				stk.pop();
			if (stk.size() != 0) {
				prices[i] -= stk.top();
				stk.push(prices[i] + stk.top());
			} else {
				stk.push(prices[i]);
			}
		}
		return prices;
	}
};

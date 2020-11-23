/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/23/20.
 * Problem link: https://leetcode.com/problems/cells-with-odd-values-in-a-matrix/
 */

/*This can be done in O(m+n) time and O(m+n) space
		Firstly notice that the order in which we add 1 does not matter. You could add 1 to all rows and then proceed to adding 1 to all columns.

Now suppose you add 1 to the same row twice, the resultant elements in that row are even. So applying the operation to the same row/col is as good as not applying anything there.

Applying operation to a same row/col any odd number of times is as good as applying the operation only once.

So now suppose there are r such rows where you apply the operation odd number of times. And c such cols where you apply operation odd number of times.

Then,
1. All m elements in each row are odd => r*m
2. All n elements in each row are odd => c*n
3. You double count r*c elements => -1 * r * c
4. Also, these r*c elements are even => -1 * r * c
So total odd elements is r*m + c*n - 2*r*c*/

#include<vector>

class Solution {
public:
	int oddCells(int n, int m, std::vector<std::vector<int>> &indices) {
		std::vector<bool> row(n, false);
		std::vector<bool> col(m, false);
		for (auto indice:indices) {
			row[indice[0]] = row[indice[0]] ^ true;
			col[indice[1]] = col[indice[1]] ^ true;
		}
		int r = 0;
		int c = 0;
		for (bool v:row)
			r += v;
		for (bool v:col)
			c += v;
		return r * m + c * n - 2 * r * c;
	}
};

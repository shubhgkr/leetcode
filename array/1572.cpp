/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 9/17/20.
 * Problem link: https://leetcode.com/problems/matrix-diagonal-sum/
 */

#include <vector>

using namespace std;

class Solution {
public:
	int diagonalSum(vector<vector<int>> &mat) {
		int sum = 0;
		if (mat.size() % 2 == 1)
			sum = -mat[mat.size() / 2][mat.size() / 2];
		for (int i = 0; i < mat.size(); i++)
			sum += mat[i][i];
		for (int i = mat.size() - 1, row = 0; i >= 0; i--, row++)
			sum += mat[row][i];
		return sum;
	}
};

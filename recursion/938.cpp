/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 8/24/20.
 * Problem link: https://leetcode.com/problems/range-sum-of-bst/
 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
	int rangeSumBST(TreeNode *root, int L, int R) {
		if (root == nullptr)
			return 0;
		if (L <= root->val && root->val <= R)
			return root->val + rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
		return rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);
	}
};

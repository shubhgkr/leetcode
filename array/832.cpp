/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/19/23.
 * Problem link: https://leetcode.com/problems/flipping-an-image/
 */

#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> flipAndInvertImage(std::vector<std::vector<int>>& A) {
        std::vector<std::vector<int>> ans(A.size(),std::vector<int>(A[0].size(),0));
        for(int i=0;i<A.size();i++){
            for(int j=0;j<A[0].size();j++){
                ans[i][A[0].size()-1-j]=!A[i][j];
            }
        }
        return ans;
    }
};

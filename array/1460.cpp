/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/20/20.
 * Problem link: https://leetcode.com/problems/make-two-arrays-equal-by-reversing-sub-arrays/
 */

#include <vector>
#include <algorithm>

class Solution {
public:
    bool canBeEqual(std::vector<int>& target, std::vector<int>& arr) {
        std::sort(target.begin(), target.end());
        std::sort(arr.begin(), arr.end());
        return target == arr;
    }
};

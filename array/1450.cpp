/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/8/20.
 * Problem link: https://leetcode.com/problems/number-of-students-doing-homework-at-a-given-time/
 */

#include <vector>

class Solution {
public:
	int busyStudent(std::vector<int>& startTime, std::vector<int>& endTime, int queryTime) {
		int count=0;
		for(int i=0;i<startTime.size();i++){
			count+=(startTime[i]<=queryTime && queryTime<=endTime[i]);
		}
		return count;
	}
};

/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/12/20.
 * Problem link: https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/
 */
 

 /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

 // Using recursion takes 4ms

class Solution {
public:
	int ans=0;
	int func(ListNode* head,int count){
		if(head->next==nullptr){
			ans+=head->val;
			return 1;
		} else{
			count=func(head->next,count);
			ans+=(pow(2,count)*head->val);
			return count+1;
		}
	}
	int getDecimalValue(ListNode* head) {
		func(head,0);
		return ans;
	}
};

 // Without using recursion takes 0ms
 class Solution {
public:
	int getDecimalValue(ListNode* head) {
		int ans=0;
		while(head!=nullptr){
			ans*=2;
			ans+=head->val;
			head=head->next;
		}
		return ans;
	}
};

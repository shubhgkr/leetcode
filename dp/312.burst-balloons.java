/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 01/02/22.
 * Problem link: https://leetcode.com/problems/burst-balloons/
 */

/* 
  * https://aaronice-gitbook-io.translate.goog/lintcode/dynamic_programming/burst-balloons?_x_tr_sl=zh-CN&_x_tr_tl=en&_x_tr_hl=en&_x_tr_pto=sc 
  * https://kennyzhuang.gitbooks.io/algorithms-collection/content/burst_balloons.html
*/
package dp;
/*
 * @lc app=leetcode id=312 lang=java
 *
 * [312] Burst Balloons
 */

// @lc code=start
class Solution {
    public int maxCoins(int[] nums) {
        int len=nums.length;
        int dp[][]=new int[len][len];
        for(int n=1;n<=len;n++){
            for(int i=0;i<=len-n;i++){
                int j=i+n-1;
                int max=Integer.MIN_VALUE;
                for(int k=i;k<=j;k++){
                    int left=(k==i?0:dp[i][k-1]);
                    int right=(k==j?0:dp[k+1][j]);
                    int center=nums[k];
                    if(i>0)
                        center*=nums[i-1];
                    if(j<len-1)
                        center*=nums[j+1];
                    max=Math.max(max,left+right+center);
                }
                dp[i][j]=max;
            }
        }
        return dp[0][len-1];
    }
}
// @lc code=end


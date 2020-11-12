/*
 * @author Shubham Kumar Gupta (shubhgkr)
 * github: http://www.github.com/shubhgkr
 * Created on 11/12/20.
 * Problem link: https://leetcode.com/problems/binary-number-with-alternating-bits/
 */

/*We know that if we shift the number by 1 to the right, all the ones will become zeros and vice versa.
 * Now if we AND those two numbers, we can get the whole thing as zero but that won't work for numbers like 2, 4, 8...
 * So we will take another approach.
 * Instead of AND we will do an XOR .
 * This will make all bits 1.
 * Now we need to check if all the bits are 1.
 * The best way to do that is AND the number by (number+1).
 * It'll give you zero.

        n =         1 0 1 0 1 0 1 0
        n >> 1      0 1 0 1 0 1 0 1
        n ^ n>>1    1 1 1 1 1 1 1 1
        n           1 1 1 1 1 1 1 1
        n + 1     1 0 0 0 0 0 0 0 0
        n & (n+1)   0 0 0 0 0 0 0 0
*/

class Solution {
public:
	bool hasAlternatingBits(int n) {
		return ((long(n) + (n >> 1) + 1) & (long(n) + (n >> 1))) == 0;;
	}
};

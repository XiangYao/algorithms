/*
* Copyright(c) 2019 Jiau Zhang
* For more information see <https://github.com/JiauZhang/algorithms>
* 
* This repo is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation
*
* It is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with THIS repo. If not, see <http://www.gnu.org/licenses/>.
*/

/*
 * 题目描述:
 *     一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。
 *     求该青蛙跳上一个n级的台阶总共有多少种跳法。
 * 
 * 解题思路：
 *     n = 1时，跳法为 1
 *     n = 2时，跳法为 2
 *     n = 3时，跳法为 f(n-1) + f(n-2) + f(n-3) = 2 + 1 + 1 = 4 = 2^2
 *     n = 4时，跳法为 f(n-1) + f(n-2) + f(n-3) + f(n-4) = 2^2 + 2 + 1 + 1 = 8 = 2^3
 *     推广到 n
 *     f(n) = f(n-1) + f(n-2) + f(n-3) + ... + f(2) + f(1) + f(0)
 *          = 2^(n-2) + 2^(n-3) + 2^(n-4) + ...+ 2 + 1 + 1
 *          = 2^(n-1)
 *     为了快速求解 f(n) 可以使用循环快速求解幂运算，但是这里是 2 的幂运算
 *     所以可以使用 移位运算 这样只需一步即可完成运算！！！
 * 
 */

class Solution {
public:
    int jumpFloorII(int number) {
        if (number <= 0)
            return 0;
        
        return (1<<(number-1));
    }
};
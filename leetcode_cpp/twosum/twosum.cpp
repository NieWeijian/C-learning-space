/*
 * 给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。
 *你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。
 * 你可以按任意顺序返回答案。
*/

#include <vector>
#include <iostream>

class Solution {
public:
    int twoSum(std::vector<int>& nums, int target, int *add_num1,int *add_num2) {
            for(int j=0;j<nums.size();j++)
            {
                for (int k = 0; k < nums.size(); k++) {
                    if(nums[k]==target-nums[j])
                    {
                        if(k==j)
                            continue;
                        else {
                            *add_num1=j;
                            *add_num2=k;
                        }
                        return 1;
                    }
                }
            }
        return 1;
    }
};
int main(void)
{
    std::vector<int> num_vector{-3,4,3,90};
    Solution solution;
    int target=0;
    int add_num1=0;
    int add_num2=0;
    solution.twoSum(num_vector,target,&add_num1,&add_num2);
    std::cout<<"nums: 3,2,4 \r\n"<<"target: "<< target <<"\r\n"<<"num1: "<<add_num1<<" num2: "<<add_num2;



    return 0;
}
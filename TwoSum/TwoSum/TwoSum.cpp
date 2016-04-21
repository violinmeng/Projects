// TwoSum.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <iostream>

class Solution {
public:
	std::vector<int> twoSum(std::vector<int>& nums, int target) {
		std::vector<int> retvec;
		// retvec.assign(0,0);
		// retvec.assign(1,0);
		for (int i = 0; i<nums.size(); i++) {
			for (int j = i + 1; j<nums.size(); j++) {
				if (nums[i] + nums[j] == target) {
					retvec.push_back(i);
					retvec.push_back(j);
				}
			}
		}
		return retvec;
	}
};
 int main(){
     std::vector<int> vec;
	 vec.push_back(3);
	 vec.push_back(2);
	 vec.push_back(4);

     std::vector<int> retvec;
     Solution solution;
     retvec = solution.twoSum(vec,6);
     std::cout<<"return vector is ["<<retvec[0]<<","<<retvec[1]<<"]"<<std::endl;
}



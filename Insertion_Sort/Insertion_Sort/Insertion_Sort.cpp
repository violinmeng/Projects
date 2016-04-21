// Insertion_Sort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
class Solution {
public:
	vector<int> InsertionSort(vector<int>& arrayToSorted) {

		for (int j = 1; j < arrayToSorted.size(); j++) {
			int key = arrayToSorted[j];
			int i = j - 1;
			while (i >= 0 && arrayToSorted[i] > key) {
				arrayToSorted[i + 1] = arrayToSorted[i];
				i = i - 1;
			}
//			swap_ranges(arrayToSorted.begin() + i, arrayToSorted.begin() + (i + 1), arrayToSorted.begin() + (j-1));
			arrayToSorted[i + 1] = key;
			

		}
		return arrayToSorted;
	}
};


int main()
{
	vector<int> A = { 5,2,7,4,6,1,3 };
	Solution S = Solution();
	vector<int> B = S.InsertionSort(A);
	for (int i = 0; i < B.size(); i++) {
		cout << B[i] << endl;
	}
    return 0;
}


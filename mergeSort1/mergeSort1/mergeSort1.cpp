// mergeSort1.cpp : 定义控制台应用程序的入口点。
//分治法实现排序；

#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;

#define INT_MAX 0x7fffffff//int类型最大值；
#define INT_MIN 0x80000000//int类型最小值；

vector<int> mergeSort(vector<int> &v1, vector<int> &v2) {
	v1.push_back(INT_MAX);
	v2.push_back(INT_MAX);//添加两个最大值，为了完全遍历两个数组；
	auto pv1 = v1.begin();
	auto pv2 = v2.begin();
	vector<int> reVec;
	while ((pv1 != v1.end() - 1) || (pv2 != v2.end() - 1)) {
		if (*pv1 < *pv2) 
			reVec.push_back(*pv1++);//后置版本++实现赋值和递增；
		else
			reVec.push_back(*pv2++);
	}
	return reVec;
}

vector<int> getRandomMerged(vector<int> &v) {
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	if (v.size() > 1) {
		for (auto c = v.begin(); c != v.begin() + (v.end() - v.begin()) / 2; ++c) 
			v1.push_back(*c);
		for (auto c = v.begin() + (v.end() - v.begin()) / 2; c != v.end(); ++c)
			v2.push_back(*c);
		v3 = mergeSort(getRandomMerged(v1), getRandomMerged(v2));
	}
	else
		v3 = v;
	return v3;
}


int main()
{
	vector<int> v = { 1,34,46,2,4,25,2,4,1 };
	vector<int> v3 = getRandomMerged(v);
	vector<int> v1 = { 1 };
	vector<int> v2;
	vector<int> v4 = mergeSort(v1, v2);
	for (auto v : v3)
		cout << v << " ";
	cout << endl;
	return 0;
}


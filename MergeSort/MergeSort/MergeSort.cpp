// MergeSort.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <cctype>
#include <vector>
using std::vector;
#include <initializer_list>
using std::initializer_list;

#include <cassert>
#include "Sales_item.h"

#define INT_MAX 0x7fffffff

#define INT_MIN 0x80000000

int fact(int val) {
	int res = 1;
	while (val > 1)
		res *= val--;//res=res*val;val=val-1;
	return res;
}

void swapint(int *p, int *q) {
	int tmp = *p;
	*p = *q;
	*q = tmp;
}

void swapint1(int &p, int &q) {
	int tmp = p;
	p = q;
	q = tmp;
}

bool hasUppercase(const string &s) {
	bool isUpper = false;
	for (auto c : s) {
		if (isupper(c))
			isUpper = true;
	}
	return isUpper;
}

void error_msg(initializer_list<string> il) {
	for (const auto &elem : il)
		cout << elem << " ";
	cout << endl;
}

vector<int> mergeSort(vector<int> v1, vector<int> v2) {

	v1.push_back(INT_MAX);
	v2.push_back(INT_MAX);
	auto pv1 = v1.begin();
	auto pv2 = v2.begin();
	vector<int> reVec;
	while ((pv1 != v1.end()-1) && (pv2 != v2.end()-1)) {
		if (*pv1 < *pv2) {
			reVec.push_back(*pv1);
			++pv1;
		}
		else {
			reVec.push_back(*pv2);
			++pv2;
		}
	}
	return reVec;
}

//typedef string strArry[10];


inline const string &shorterString(const string &s1, const string &s2) {
	return s1.size() <= s2.size() ? s1 : s2;
}





int main()
{
//	int i = 0, j = 1;
//	cout << "i=" << i << ";" << "j=" << j << endl;
//	swapint(&i, &j);
//	swapint1(i, j);
//	cout << "after swap i=" << i << ";" << "j=" << j << endl;
	//bool is = hasUppercase("this is Test");
	//cout << is << endl;
	//int *p1[10];
	//int(*p)[10];

	/*int ia[10];
	for (int i = 0; i != 10; ++i) {
		get(ia, i) = i;
	}
	for (auto a = begin(ia); a != end(ia); ++a)
		cout << *a << endl;*/
	vector<int> v1 = { 1,4,7,9,14 };
	vector<int> v2 = { 2,3,6,10,17 };
	vector<int> v3 = mergeSort(v1, v2);
	for (auto v : v3)
		cout << v << " ";
	cout << endl;
	return 0;
}


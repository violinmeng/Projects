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


//typedef string strArry[10];


inline const string &shorterString(const string &s1, const string &s2) {
	return s1.size() <= s2.size() ? s1 : s2;
}





int main()
{
	int i = 0, j = 1;
	cout << "i=" << i << ";" << "j=" << j << endl;
	swapint(&i, &j);
	swapint1(i, j);
	cout << "after swap i=" << i << ";" << "j=" << j << endl;
	//bool is = hasUppercase("this is Test");
	//cout << is << endl;
	//int *p1[10];
	//int(*p)[10];

	//int ia[10];
	//for (int i = 0; i != 10; ++i) {
	//	get(ia, i) = i;
	//}
	//for (auto a = begin(ia); a != end(ia); ++a)
	//	cout << *a << endl;
	return 0;
}


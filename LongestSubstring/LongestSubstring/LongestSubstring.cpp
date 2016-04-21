// LongestSubstring.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <unordered_map>

using namespace std;
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		unordered_map<char,int> m;
		int lenghtRes =0;
		int i = 0;
		for (string::iterator it = s.begin(); it != s.end(); ++it) {

			char temp = *it;
			unordered_map<char, int>::const_iterator got = m.find(temp);
			if (got!=m.end()) {
				int a = i - got->second;
				lenghtRes = (lenghtRes > a ? lenghtRes : a);
				m.erase(m.begin(), got);
			}
			m[temp] = i;
			lenghtRes++;
		}
	}
};
int main()
{
    return 0;
}


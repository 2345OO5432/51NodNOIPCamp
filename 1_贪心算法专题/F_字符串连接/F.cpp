/*
输入n个字符串s[i]，你要把他们按某个顺序连接起来，使得字典序最小。
(1 <= n <= 100)
(每个字符串长度 <= 100)
(字符串只包含小写字母)
Input
第一行一个整数n。
接下来每行一个字符串s[i]。
Output
一行一个字符串表示把输入的n个字符串按某个顺序连接之后的结果
Input示例
6
it
looks
like
an
easy
problem
Output示例
aneasyitlikelooksproblem
*/ 

#include<bits/stdc++.h>
using namespace std;
bool cmp(const string &a,string &b){
	return a + b < b + a;
}
int n;
string s[120];
int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> s[i];
	}
	sort(s,s+n,cmp);
	for(int i = 0;i < n;i++){
		cout << s[i];
	}
	cout << endl;
	return 0;
}

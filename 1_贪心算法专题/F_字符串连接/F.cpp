/*
����n���ַ���s[i]����Ҫ�����ǰ�ĳ��˳������������ʹ���ֵ�����С��
(1 <= n <= 100)
(ÿ���ַ������� <= 100)
(�ַ���ֻ����Сд��ĸ)
Input
��һ��һ������n��
������ÿ��һ���ַ���s[i]��
Output
һ��һ���ַ�����ʾ�������n���ַ�����ĳ��˳������֮��Ľ��
Inputʾ��
6
it
looks
like
an
easy
problem
Outputʾ��
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

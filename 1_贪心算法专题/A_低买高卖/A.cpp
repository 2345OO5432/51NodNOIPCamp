/*
A �������
 
���ǹ�Ʊ�г���һ����n�졣
���ڵ�i�죬B��֪����Ʊ�ļ۸���ÿ��λa[i]Ԫ
��ÿһ�죬B������ѡ������һ����λ�Ĺ�Ʊ������һ����λ�Ĺ�Ʊ������ʲô��������
�տ�ʼB����������Ǯ������û���κι�Ʊ��
��n��֮��B��������׬����Ǯ��
(1 <= n <= 200000)
(1 <= a[i] <= 10000)
Input
��һ��һ������n��ʾ������
������һ��n����������ʾÿ��ļ�Ǯ��
Output
һ��һ��������ʾ������׬��Ǯ����
Inputʾ��
9
10 5 4 7 9 12 6 2 10
Outputʾ��
20
C++������ʱ��Ϊ��1000 ms ���ռ�����Ϊ��131072 KB 
*/ 

#include<bits/stdc++.h>
using namespace std;
priority_queue<int> q;
int n,x;
long long z;
int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&x);
		q.push(-x);
		q.push(-x);
		z += x + q.top();
		q.pop();
	}
	printf("%lld\n",z);
	return 0;
}

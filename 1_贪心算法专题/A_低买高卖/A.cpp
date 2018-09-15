/*
A 低买高卖
 
考虑股票市场，一共有n天。
对于第i天，B君知道股票的价格是每单位a[i]元
在每一天，B君可以选择买入一个单位的股票，卖出一个单位的股票，或者什么都不做。
刚开始B君有无穷多的钱，但是没有任何股票。
问n天之后B君最多可以赚多少钱。
(1 <= n <= 200000)
(1 <= a[i] <= 10000)
Input
第一行一个整数n表示天数。
接下来一行n个整数，表示每天的价钱。
Output
一行一个整数表示最多可以赚的钱数。
Input示例
9
10 5 4 7 9 12 6 2 10
Output示例
20
C++的运行时限为：1000 ms ，空间限制为：131072 KB 
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

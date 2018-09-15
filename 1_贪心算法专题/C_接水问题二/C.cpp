/*
n个人一起排队接水，第i个人的重要性是a[i]，需要b[i]的时间来接水。
1 <= n <= 100000
0 <= b[i] <= 1000
0 <= a[i] <= 1000
同时只能有一个人接水，正在接水的人和没有接水的人都需要等待。
完成接水的人会立刻消失，不会继续等待。
你可以决定所有人接水的顺序，并希望最小化所有人等待时间乘以自己的重要性a[i]的总和。

Input
第一行一个整数n。
以下n行，每行两个整数a[i]和b[i]。
Output
一行一个整数表示答案。
Input示例
4
1 4
2 3
3 2
4 1
Output示例
35
*/

#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<cassert>
using namespace std;
pair<int,int>a[1000020];
int n;
bool cmp(const pair<int,int> &a,const pair<int,int> &b){
	return a.first * b.second < b.first * a.second;
}

int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d%d",&a[i].first,&a[i].second);
		if(a[i].first == 0 || a[i].second == 0){
			i--;
			n--;
		}
	}
	sort(a,a + n,cmp);
	long long z = 0,s = 0;
	for(int i = 0;i < n;i++){
		s += a[i].first;
		z += s * a[i].second;
	}
	printf("%lld\n",z);
	return 0;
}

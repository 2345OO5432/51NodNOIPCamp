/*
n个人一起排队接水，第i个人需要b[i]的时间来接水。
1 <= n <= 1000
0 <= b[i] <= 1000
同时只能有一个人接水，正在接水的人和没有接水的人都需要等待。
完成接水的人会立刻消失，不会继续等待。
你可以决定所有人接水的顺序，并希望最小化所有人等待时间的总和。
Input
第一行一个整数n
接下来n行，每行一个整数表示b[i]
Output
一行一个整数，表示所有人等待时间的总和的最小值
Input示例
3
1
2
3
Output示例
10
*/

#include<bits/stdc++.h>
using namespace std;
int n,a[1020];
int main(){
	scanf("%d",&n);
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
	sort(a,a+n);
	int s = 0;
	for(int i = 0;i < n;i++){
		s += a[i] * (n-i);
	}
	printf("%d\n",s);
	return 0;
}

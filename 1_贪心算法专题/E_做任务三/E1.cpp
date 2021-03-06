/*
B君和m个人一起，要完成n个任务，在这个题中，B君和m个人，什么都不做。
第i个任务有一个开始时间s[i]和结束时间e[i]（保证s[i]<=e[i]），一个人完成两个任务的时间区间，不能有交集，但是可以首尾相连。（参考样例）
换句话说，如果一个人依次完成了(s[1], e[1]) (s[2], e[2]) (s[3], e[3])这3个任务，那么这3个任务需要满足s[1]<=e[1]<=s[2]<=e[2]<=s[3]<=e[3]。
同一个任务只能完成一次，并且中间不能换人。
B君和m个人，想知道要想完成这些任务，至少需要几个人？
(单组 n <= 100000)
(所有 n 求和 <= 200000)
(开始时间和结束时间，都是非负整数，且在int范围内。)
(开始时间 <= 结束时间，如果等于的话，意味着这个任务可以瞬间被做完，但是不能没有人做)

Input
多组数据，第一行是数据组数。
每组数据的第一行两个整数n, m分别表示任务数，和人数。
以下n行，每行两个整数表示任务的开始时间和结束时间。
Output
对于每组数据输出一个整数
表示完成这些任务至少需要多少人。
Input示例
4
2 1
1 3
2 4
2 1
1 3
3 5
2 1
1 3
2 2
4 1
1 2
2 2
2 2
2 3
Output示例
2
1
2
1
*/

#include<bits/stdc++.h>
using namespace std;
int t,n,m;
pair<int,int> a[100020];
int main(){
	scanf("%d",&t);
	for(int tt = 0;tt < t;tt++){
		int z = 0;
		priority_queue<int> q;
		scanf("%d%d",&n,&m);
		for(int i = 0;i < n;i++){
			scanf("%d%d",&a[i].first,&a[i].second);
		}
		sort(a,a + n);
		for(int i = 0;i < n;i++){
			if(q.size() && -q.top() <= a[i].first){
				q.pop();
				q.push(-a[i].second);
			} else{
				q.push(-a[i].second);
				z++;
			}
		}
		printf("%d\n",z);
	}
	return 0;
}		

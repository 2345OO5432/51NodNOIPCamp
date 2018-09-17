/*
有N个任务，每个任务有一个最晚结束时间以及一个对应的奖励。在结束时间之前完成该任务，就可以获得对应的奖励。
完成每一个任务所需的时间都是1个单位时间。有时候完成所有任务是不可能的，因为时间上可能会有冲突，这需要你来取舍。求能够获得的最高奖励。
Input
第1行：一个数N，表示任务的数量(2 <= N <= 50000)
第2 - N + 1行，每行2个数，中间用空格分隔，表示任务的最晚结束时间E[i]以及对应的奖励W[i]。(1 <= E[i] <= 10^9，1 <= W[i] <= 10^9)
Output
输出能够获得的最高奖励。
Input示例
7
4 20
2 60
4 70
3 40
1 30
4 50
6 10
Output示例
230
*/

#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
pair<int,int> a[50000];
priority_queue<int> q;
int n;
long long ans;
int main(){
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i].first >> a[i].second;
	}
	sort(a,a+n);
	for(int i = 0;i < n;i++){
		q.push(-a[i].second);
		ans += a[i].second;
		if(q.size() > a[i].first){
			ans += q.top();
			q.pop();
		}
	}
	cout << ans << endl;
	return 0;
}

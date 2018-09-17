/*
又到了诺德县的百姓孝敬夹克大老爷的日子，带着数量不等的铜板的村民准时聚集到了村口。
夹克老爷是一位很"善良"的老爷，为了体现他的仁慈，有一套特别的收钱的技巧。
1、让所有的村民排成一队，然后首尾相接排成一个圈。
2、选择一位村民收下他的铜钱，然后放过他左右两边的村民。
3、让上述三位村民离开队伍，并让左右两边的其他村民合拢起来继续围成一个圈。
4、重复执行2、3直到村民全部离开。
夹克老爷的家丁早早的组织村民排成一队并清点了村民人数和他们手里的铜钱数量。
作为夹克老爷的首席师爷，你要负责按照夹克老爷的收钱技巧完成纳贡的任务。
聪明的你当然知道夹克老爷并不像他表现出来的那样仁慈，能否收到最多的钱财决定了你是否能够继续坐稳首席师爷的位置。
今年村民的人数是N，恰巧是3的倍数。


提示：第2步选择村民时不需要按照任何顺序，你可以选择任何一位仍然在队伍里的村民收取他手中的钱财并放走他两侧的村民（这就意味着你无法同时收取到这两位的铜钱了）
Input
第一行1个整数N（3 <= N <= 10^5 - 1, N % 3 == 0）
第2 - N + 1行：每行1个数对应村民i手中的铜钱。(0 <= m[i] <= 10^9)
Output
一个整数，说明在夹克老爷的收钱规则下你最多能够为夹克老爷搜刮到多少铜钱
Input示例
6
6
2
3
4
5
9
Output示例
13
*/

#include<iostream>
#include<set>
using namespace std;
int L[99999],R[99999];
long long m[99999];
set<pair<long long,int>>s;
void insert(int x){
	s.insert(make_pair(m[x],x));
}
void erase(int x){
	s.erase(make_pair(m[x],x));
}
void del(int x){
	erase(x);
	R[L[x]] = R[x];
	L[R[x]] = L[x];
}

int main(){
	int n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> m[i];
		insert(i);
		L[(i + 1) % n] = i;
		R[i] = (i + 1) % n ;
	}
	long long ans = 0;
	for(int i = 0;i < n/3;i++){
		int j = s.rbegin()->second;
		long long a = m[L[j]];
		long long b = m[j];
		long long c = m[R[j]];
		ans += b;
		del(L[j]);
		del(R[j]);
		erase(j);
		m[j] = a + c - b;
		insert(j);
	}
	cout << ans << endl;
	return 0;
}

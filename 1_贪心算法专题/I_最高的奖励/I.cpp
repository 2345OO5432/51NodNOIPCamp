/*
��N������ÿ��������һ���������ʱ���Լ�һ����Ӧ�Ľ������ڽ���ʱ��֮ǰ��ɸ����񣬾Ϳ��Ի�ö�Ӧ�Ľ�����
���ÿһ�����������ʱ�䶼��1����λʱ�䡣��ʱ��������������ǲ����ܵģ���Ϊʱ���Ͽ��ܻ��г�ͻ������Ҫ����ȡ�ᡣ���ܹ���õ���߽�����
Input
��1�У�һ����N����ʾ���������(2 <= N <= 50000)
��2 - N + 1�У�ÿ��2�������м��ÿո�ָ�����ʾ������������ʱ��E[i]�Լ���Ӧ�Ľ���W[i]��(1 <= E[i] <= 10^9��1 <= W[i] <= 10^9)
Output
����ܹ���õ���߽�����
Inputʾ��
7
4 20
2 60
4 70
3 40
1 30
4 50
6 10
Outputʾ��
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

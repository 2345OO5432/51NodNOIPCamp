/*
n����һ���Ŷӽ�ˮ����i���˵���Ҫ����a[i]����Ҫb[i]��ʱ������ˮ��
1 <= n <= 100000
0 <= b[i] <= 1000
0 <= a[i] <= 1000
ͬʱֻ����һ���˽�ˮ�����ڽ�ˮ���˺�û�н�ˮ���˶���Ҫ�ȴ���
��ɽ�ˮ���˻�������ʧ����������ȴ���
����Ծ��������˽�ˮ��˳�򣬲�ϣ����С�������˵ȴ�ʱ������Լ�����Ҫ��a[i]���ܺ͡�

Input
��һ��һ������n��
����n�У�ÿ����������a[i]��b[i]��
Output
һ��һ��������ʾ�𰸡�
Inputʾ��
4
1 4
2 3
3 2
4 1
Outputʾ��
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

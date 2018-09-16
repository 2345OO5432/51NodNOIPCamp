/*
��ܶ���ţһ����Farmer John��Ⱥ�����ŵ���ţ�Ƕ�ʳ��Խ��Խ���ޣ�����öѲݾ��ܴ������緹��������Ȼ��һȥ�����ˡ�
���ڣ�Farmer John���ò�ȥ����ר�������ﹺ�������ζ��֭�����ݣ�����������N(1 <= N <= 100,000)ͷ���޵���ţ�� 
������ţ����FJ������������ݵ�Ҫ�󣺵�iͷ��ţҪ������ʳ��ÿ�ݵļ�Ǯ������A_i(1 <= A_i <= 1,000,000,000)���������۳̶Ȳ��ܵ���B_i(1 <= B_i <= 1,000,000,000)��
�̵��﹩ӦM(1 <= M <= 100,000)�ֲ�ͬ�����ݣ���i �����ݵĶ���ΪC_i(1 <= C_i <= 1,000,000,000)�����۳̶�ΪD_i (1 <= D_i <= 1,000,000,000)�� 
Ϊ����ʾ���ǵ����ڲ�ͬ��ÿͷ��ţ��Ҫ������ʳ���Ƕ�һ�޶��ģ�Ҳ����˵��û������ͷ��ţ��ѡ��ͬһ��ʳ� 
Farmer John��֪����Ϊ����������ţ���⣬�����ٵ��ڹ���ʳ���ϻ�����Ǯ��
Input
* ��1��: 2���ÿո������������N �� M

* ��2..N+1��: ��i+1�а���2���ÿո������������A_i��B_i * ��N+2..N+M+1��: ��j+N+1�а���2���ÿո������������C_i��D_i
Output
* ��1��: ���1����������ʾʹ������ţ�������С���ѡ����������ζ��޷� ����������ţ���������-1
Inputʾ��
4 7
1 1
2 3
1 4
4 2
3 2
2 1
4 3
5 2
5 4
2 6
4 4
Outputʾ��
12
*/

#include<bits/stdc++.h>
using namespace std;
pair<int,int> a[100020];
pair<int,int> b[100020];
int n,m,p;
long long z;
multiset<int> s;
int main(){
	scanf("%d%d",&n,&m);
	for(int i = 0;i < n;i++){
		scanf("%d%d",&a[i].second,&a[i].first);
		a[i].first = -a[i].first;
	}
	for(int i = 0;i < m;i++){
		scanf("%d%d",&b[i].second,&b[i].first);
		b[i].first = -b[i].first;
	}
	sort(a,a + n);
	sort(b,b + m);
	for(int i = 0;i < n;i++){
		while(p < m && b[p].first <= a[i].first){
			s.insert(b[p++].second);
		}
		multiset<int>::iterator it = s.lower_bound(a[i].second);
		if(it == s.end()){
			z = -1;
			break;
		}else{
			z += *it;
			s.erase(it);
		}
	}
	printf("%lld\n",z);
	return 0;
}

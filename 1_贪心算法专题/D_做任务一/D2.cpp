#include<bits/stdc++.h>
using namespace std;
int t,n,m;
pair<int,int> a[100020];
int main(){
	scanf("%d",&t);
	for(int tt = 0;tt < t;tt++){
		int z = 0;
		multiset<int> s;
		scanf("%d%d",&n,&m);
		for(int i = 0;i < n;i++){
			scanf("%d%d",&a[i].second,&a[i].first);
		}
		sort(a,a+n);
		int r = 0;
		for(int i = 0;i < n;i++){
			if(r <= a[i].first){
				r = a[i].second;
				z++;
			}else if(a[i].second){
				r = a[i].second;
			}
		}
		printf("%d\n",z);
	}
	return 0;
}

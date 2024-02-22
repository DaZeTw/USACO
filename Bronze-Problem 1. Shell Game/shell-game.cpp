// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
	freopen("shell.in","r",stdin);
	int n;
	scanf("%d",&n);
	vector<int>pos(3);
	vector<int>count(3);
	for (int i=0;i<3;i++){
		pos[i]=i;
	}
	for (int i=0;i<n;i++){
		int a,b,g;
		scanf("%d %d %d",&a,&b,&g);
		a--;
		b--;
		g--;
		swap(pos[a],pos[b]);
		count[pos[g]]++;
	}
	freopen("shell.out","w",stdout);
	printf("%d\n",max({count[0],count[1],count[2]}));
}


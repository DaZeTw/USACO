// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() 
{
 ios_base::sync_with_stdio(0); 
 cin.tie(0);
 freopen("cowqueue.in","r",stdin);
 freopen("cowqueue.out","w",stdout);

 int n;
 cin>>n;
 vector<pair<int,int>> v;
 for(int i=0; i<n; i++){
 	int x, y;
 	cin>>x>>y;
 	v.push_back({x,y});
 }
 sort(v.begin(),v.end());
 int sum=v[0].first;
 for(pair<int,int>p: v){
    if(sum>=p.first)
    	sum+=p.second;
    else
    	sum+=p.first-sum+p.second;
   }
   cout<<sum;
 }

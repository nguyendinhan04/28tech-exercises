//sort diem trong khong gian 3 chieu
#include<bits/stdc++.h>
using namespace std;

bool cmp(pair< int, pair<int,int>> p1,pair< int, pair<int,int>> p2){
    if(p1.first!=p2.first) return p1.first<p2.first;
    if(p1.second.first!=p2.second.first) return p1.second.first < p2.second.first;
     return p1.second.second<p2.second.second;
}
int main(){
    int n; cin>>n;
    vector<pair< int, pair<int,int>>> v;
    for(int i = 0 ; i < n;i++)
    {
        pair< int, pair<int,int>> p;
        cin>>p.first>>p.second.first>>p.second.second;
        v.push_back(p);
    }
    sort(v.begin(),v.end(),cmp);
    for(auto x: v)
    {
        cout<< x.first<<" "<< x.second.first<<" "<<x.second.second<<endl;
    }

}

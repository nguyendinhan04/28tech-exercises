#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
    int n, x; cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    auto it1 = lower_bound(a, a + n, x);
    if(it1 != a + n)
        cout << it1 - a << endl;
    else
        cout << "-1\n";
    auto it2 = upper_bound(a, a + n, x);
    if(it2 != a + n){
        cout << it2 - a << endl;
    }
    else{
        cout << "-1\n";
    }
    int p1 = -1, p2 = -1;
    if(*it1 == x) p1 = it1 - a;
    --it2;
    if(*it2 == x) p2 = it2 - a;
    cout << p1 << endl;
    cout << p2 << endl;
    if(p1 != -1)
        cout << p2 - p1 + 1 << endl;
    else cout << 0 << endl;
}

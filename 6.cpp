#include<bits/stdc++.h>
using namespace std;

void solve(){
    int l , r ;
    cin >> l >> r ;
    int x = l , y = 2 * l ;
    if(y > r){
        cout << - 1 << " " << -1 << endl ;
    }
    else{
        cout << x << " " << y << endl ;
    }
}

int main(){
    ios_base::sync_with_stdio(false);

    int testcase ;
    cin >> testcase ;
    for(int i = 0 ; i < testcase ; i ++){
        solve();
    }

    return 0 ;
}
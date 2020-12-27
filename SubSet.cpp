/*
*   Author: Mahdi Esmailiyan ( MS128 )
*   Created: 2020.12.27
*   In The Name God 
*/
#include <bits/stdc++.h>
#define endl '\n'
#define debug(x) cerr<<#x<<" = "<<x<<'\n'
#define sync ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
typedef long long ll;
using namespace std;
const int mx = 2e5+10, inf = 1e9+100, mod = 1e9+7;
//-------------------------------------------
//-----------START TO CODE HERE--------------
//------------------------------------------- 
int main(){
    int n;
    cin >> n;
    int set[n];
    for (int i=0 ; i<n ; i++)
        cin >> set[i];
    /// (1<<n) = 2^n
    for (int mask = 0; mask < (1<<n); mask++) {
        for (int i = 0; i < n; i++)
            if (mask & (1<<i))
            cout << set[i] << " ";
        cout << endl;
    }
}

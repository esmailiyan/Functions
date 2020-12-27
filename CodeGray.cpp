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
void gray(string prefix, int n);
void yarg(string prefix, int n);

int main() {
    int n;
    cin >> n;
    gray("", n);
}

void yarg(string prefix, int n) {
    if (n == 0)
        cout << prefix << endl;
    else {
        gray(prefix + "1", n - 1);
        yarg(prefix + "0", n - 1);
    }
}

void gray(string prefix, int n) {
    if (n == 0)
         cout << prefix << endl;
    else {
        gray(prefix + "0", n - 1);
        yarg(prefix + "1", n - 1);
    }
}

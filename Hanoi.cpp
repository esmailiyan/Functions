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
int cnt = 1;
void hanoi(char from, char to, char help, int n){
    if (n == 1) {
        // base case
        // move the only disk from 'from' to 'to'
        cout << cnt++ << ' ' << from << ' ' << to << '\n';
        return;
    }
    // n != 1 Recursion case
    // move n-1 disk from 'from' to 'help'
    // call the same function with different arguments
    hanoi(from, help, to, n-1);
    // move the n-th disk from 'from' to 'to'
    cout << cnt++ << ' ' << from << ' ' << to << '\n';
    // move n-1 disk from 'help' to 'to'
    // call the same function with different arguments
    hanoi(help, to, from, n-1);
}

int main(){
    int n;
    cin >> n; // input
    hanoi('A', 'B', 'C', n); // move n disk from 'A' to 'B'
}

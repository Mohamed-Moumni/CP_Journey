//#define Print 1
#include <iostream>
#include <complex>
#include <iomanip>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <vector>
#include <cmath>
#include <map>
#include <set>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

#define int long long
typedef long long ll;
typedef vector<int> vi;
typedef vector<pair <int,int> > vpi;
typedef vector<long long> vll;
typedef pair<int,int> pi;
typedef pair<ll,ll> pll;
#define F first
#define ln '\n'
#define S second
#define PB push_back
#define MP make_pair
#define B begin()
#define RB rbegin()
#define E end()
#define RE rend()
#define Z size()
#define REP(i,a,b) for (int i = a; i < b; i++)
#define L length()
const int mod = (int)1e9 + 7;

ll cache[50];

// recursive
ll f(ll n){
    if (n < 2) return n;
    if (cache[n] != -1){
        return cache[n];
    }
    cache[n] = f(n - 1) + f(n - 2);
    return cache[n];   
}

//iterative

ll f2(ll n){
    cache[0] = 0;
    cache[1] = 1;
    REP(i, 0,n + 1)
    {
        cache[i + 1] += cache[i];
        cache[i + 2] += cache[i];
    }
    return (cache[n]);
}

signed main(void)
{
    cout << f2(7) << "\n";
}
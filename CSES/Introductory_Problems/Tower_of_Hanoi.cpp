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

ll moves = 0;
string result;

void    print_move(ll start, ll end)
{
    cout << start << " " << end << "\n";
}

void    tower_hanoi(ll n, ll start, ll end)
{
    ll other;
    if (n == 1)
    {
        print_move(start, end);
    }
    else
    {
        other = 6 -(start + end);
        tower_hanoi(n - 1, start, other);
        print_move(start, end);
        tower_hanoi(n - 1, other, end);
    }
}

signed  main(void)
{
    ll  n;

    cin >> n;
    cout << pow(2, n) - 1 << "\n";
    tower_hanoi(n, 1, 3);
    return(0);
}
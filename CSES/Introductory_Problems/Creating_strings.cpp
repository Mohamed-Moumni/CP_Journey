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

signed main(void)
{
    string str;
    vector <string> permu;
    cin >> str;
    sort(str.begin(), str.end());
    do {
        permu.push_back(str); 
    }
    while (next_permutation(str.begin(), str.end()));
    cout << permu.size() << "\n";
    ll i = 0;
    while (i < permu.size())
    {
        cout << permu[i] << ln;
        i++;
    }
    return (0);
}
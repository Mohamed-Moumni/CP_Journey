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
#define valid(a,b,c) (a >= b && a < c ? 1 : 0)
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
const int mod = (int)1e9 + 7;

signed main(void)
{
    int a,b;
    int n,k;

    cin >> a >> b;
    cin >> k >> n;
    vector<int> tab(a);
    vector<int> tab2(b);
    for (int i = 0; i < a; i++)
    {
        cin >> tab[i];
    }
    for (int i = 0; i < b; i++)
    {
        cin >> tab2[i];
    }
    sort(tab.begin(), tab.end());
    sort(tab2.begin(), tab2.end());
    if (tab[a - 1] <= tab2[0])
    {
        if (tab[a - 1] == tab2[0])
        {
            if (tab[a - 1])
            if (n == a || k == b)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else
            cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
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
    int n;

    cin >> n;
    if (n % 4 == 0)
        cout << "YES" << endl;
    else if (n % 7 == 0)
        cout << "YES" << endl;
    else if(n % 47 == 0)
        cout << "YES" << endl;
    else
    {
        while(n > 0)
        {
        // cout << "Here" << endl;
            if (n % 10 != 7 && n % 10 != 4)
            {
                cout << "NO" << endl;
                return (0);
            }
            n = n / 10;
        }
        cout << "YES" << endl;
    }   
}
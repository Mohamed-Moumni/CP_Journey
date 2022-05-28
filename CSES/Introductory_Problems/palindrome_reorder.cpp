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

signed  main(void)
{
    string  str;
    cin >> str;
    vi alpha(26, 0);
    for (int i = 0; i < str.size();i++)
    {
        alpha[str[i] - 'A'] += 1;
    }
    ll  oddPos = -1;
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] % 2 == 1)
        {
            if (oddPos == -1)
            {
                oddPos = i;
            }
            else
            {
                cout << "NO SOLUTION";
                return (0);
            }
        }
    }
    string res;
    for(int i =0 ; i < 26; i++)
    {
        for(int j =0; j < alpha[i] / 2; j++)
        {
            res += (char)('A' + i);
        }
    }
    cout << res;
    if (oddPos != -1)
        cout << (char)('A' + oddPos);
    reverse(res.B,res.E);
    cout << res;
}
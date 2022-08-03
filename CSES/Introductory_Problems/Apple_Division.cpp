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

int main(void)
{
    long long t;
    long long sum = 0;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long a;
        cin >> a;
        sum += a;
    }
    if (sum % 2)
        cout << "1\n";
    else
        cout << "0\n";
    return (0);
}
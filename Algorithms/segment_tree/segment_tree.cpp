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

const int N = 1e5;
int n;
int t[2 * N];

void    build(){
    for (int i = n - 1; i > 0 ; --i) t[i] = t[i<<1] + t[i<<1|1]
}
int main() {
 


    return 0;
}

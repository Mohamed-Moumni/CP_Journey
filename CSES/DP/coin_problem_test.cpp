#include <iostream>

using namespace std;

int solve(int a, int *coins)
{
    if (a < 0)
        return (1e9);
    if (a == 0)
        return (0);
    return (min (min(solve(a - coins[0], coins), solve(a - coins[1],coins)), solve(a - coins[2],coins)) + 1);
}

int main(void)
{
    int coins[3];
    coins[0] = 1;
    coins[1] = 3;
    coins[2] = 4;

    int a;
    cin>>a;
    cout << solve(a, coins) << endl;
}
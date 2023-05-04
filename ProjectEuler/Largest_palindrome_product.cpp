#include<iostream>
#include<algorithm>

using namespace std;

bool    IsPalindrome(int num)
{
    int  com = 0;
    for (int i = 0; i < 3;i++)
    {
        com = com * 10 + num % 10;
        num /= 10;
    }
    if (com == num)
        return (true);
    return (false);
}
int main(void)
{
    int  a = 999, b = 999;
    int ans = 0;
    while (a >= 100)
    {
        b = 999;
        while (b >= 100)
        {
            if (IsPalindrome(a*b))
                ans = max(ans, a*b);
            b--;
        }
        a--;
    }
    cout << ans << endl;
    return (0);
}
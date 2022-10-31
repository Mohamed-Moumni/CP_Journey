#include<stdio.h>

typedef long long ll;

ll solve(ll n)
{
    if (n == 1)
        return (1);
    if (n % 2 == 0)
        return (1 + solve(n / 2));
    else
        return (1 + solve(3 * n + 1));
    return (0);
}

void ft_swap(ll *a, ll *b)
{
    ll temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    ll a,b;
    ll res;
    ll max = -1;
    while (scanf("%lld %lld",&a, &b) != EOF)
    {
        if (b < a)
            ft_swap(&a,&b);
        max = -1;
        for (ll i=a;i<=b;i++)
        {
            res = solve(i);
            if (res > max)
                max = res;
        }
        printf("%lld %lld %lld\n", a,b,max);
    }
}
#include<stdio.h>

typedef long long ll;

ll solve(ll n)
{
    ll count = 1;
    ll x = n;
    while (x != 1)
    {
        if (x % 2 == 0)
        {
            x = x / 2;
            count++;
        }
        else
        {
            x = x * 3 + 1;
            count++;
        }
    }
    return (count);
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
    int  check =0;
    while (scanf("%lld %lld",&a, &b) != EOF)
    {
        check = 0;
        if (b < a)
        {
            check = 0;
            ft_swap(&a,&b);
        }
        max = -1;
        ll i = a;
        for (;i<=b;i++)
        {
            res = solve(i);
            if (res > max)
                max = res;
        }
        if (check)
            printf("%lld %lld %lld\n", b,a,max);
        else
            printf("%lld %lld %lld\n", a,b,max);
    }
}
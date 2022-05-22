#include<iostream>
#include<algorithm>

using namespace std;

int main(void)
{
    long t;

    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        long count = 0;
        long min = 10;
        long num = n;
        while (num > 0)
        {
            if ((num%10) <= min)
            {
                min = num%10;
            }
            num = num/10;
            count++;
        }
        if (count == 2)
            cout << (n % 10) << "\n";
        else
        {
            cout << min << "\n";
        }
    }
}
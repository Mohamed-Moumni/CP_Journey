#include<iostream>
#include<set>

using namespace std;

int main(void)
{
    long n;cin>>n;
    long sum = (n * (n + 1)) / 2;
    set<long> s1, s2;

    if (sum % 2)
        cout << "NO\n";
    else
    {
        long halfSum = sum / 2;
        for (int i = n; i >= 1; i--)
        {
            if (halfSum - i >= 0)
            {
                s1.insert(i);
                halfSum -= i;
            }
            else
            {
                s2.insert(i);
            }
        }
        cout << "YES\n";
        cout << s1.size() << endl;
        for (auto u:s1)
            cout << u << " ";
        cout << endl;
        cout << s2.size() << endl;
        for (auto u:s2)
            cout << u << " ";
        cout << endl;
    }
    return (0);
}

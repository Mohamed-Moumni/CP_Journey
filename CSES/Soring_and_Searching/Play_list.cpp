#include<iostream>
#include<algorithm>
#include<vector>
#include<set>

using namespace std;

int main(void)
{
    long long n;
    long long a;
    set<long long> songs;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        songs.insert(a);
    }
    cout << songs.size() << "\n";
}
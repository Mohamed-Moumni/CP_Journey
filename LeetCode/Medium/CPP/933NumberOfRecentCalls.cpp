#include<iostream>
#include<queue>

using namespace std;

class RecentCounter
{
public:
    queue<int> q;
    RecentCounter()
    {
    }

    int ping(int t)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        q.push(t);
        while (t - 3000 > q.front())
            q.pop();
        return q.size();
    }
};

int main(void)
{
    RecentCounter * obj = new RecentCounter();

    cout << obj->ping(1) << endl;
    cout << obj->ping(100) << endl;
    cout << obj->ping(3001) << endl;
    cout << obj->ping(3002) << endl;

    return (0);
}
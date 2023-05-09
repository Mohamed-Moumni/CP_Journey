#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main(void)
{
    int n;cin>>n;
    vector<int> vec(n);
    set<int> s;
    for(int i = 0; i < n; i++)
        cin >> vec[i];
    int j = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        while (j < n && !s.count(vec[j]))
        {
            s.insert(vec[j]);
            j++;
        }
        ans = max(ans, j - i);
        s.erase(vec[i]);
    }
    cout << ans << endl;
    return (0);
}
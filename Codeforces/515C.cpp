#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

const char *elem[10] = {"", "", "2", "3", "322", "5", "53", "7", "2227", "3327"};
vector<string> temp(elem, end(elem));
int main(void)
{
    int n;
    cin >> n;
    string s1;
    cin >> s1;
    string res = "";
    for (int i=0; i < n; i++)
    {
        res += temp[s1[i] - '0'];
    }
    sort(res.begin(),res.end());
    reverse(res.begin(), res.end());
    cout << res << endl;
}
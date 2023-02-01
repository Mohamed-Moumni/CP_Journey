#include<iostream>
#include<vector>
#include<set>
#include<utility>
#include<map>
#include<string>
#include<algorithm>

using namespace std;

bool    comp(pair<string,string> a, pair<string, string> b)
{
    return (a.second < b.second);
}

vector<vector<string> > groupAnagrams(vector<string>& strs)
{
    vector<pair<string, string> > mp;
    vector<vector<string> > res;
    map<string, int> mp2;
    string temp;
    for (int i = 0; i < strs.size() ; i++)
    {
        temp = strs[i];
        sort(temp.begin(), temp.end());
        mp2[temp]++;
        mp.push_back(make_pair(strs[i], temp));
    }
    sort(mp.begin(), mp.end(), comp);
    map<string, int>::iterator it = mp2.begin();
    vector<string> ins; 
    for(int i = 0 ; i < mp.size();i++)
    {
        if (it->second == 0)
        {
            res.push_back(ins);
            ins.clear();
            ins.push_back(mp[i].first);
            it++;
            it->second--;
        }
        else
        {
            ins.push_back(mp[i].first);
            it->second--;
        }
    }
    res.push_back(ins);
    return (res);
}

int main(void)
{
    vector<string> a;
    a.push_back("eat");
    a.push_back("tea");
    a.push_back("tan");
    a.push_back("ate");
    a.push_back("nat");
    a.push_back("bat");
    vector<vector<string> > retur = groupAnagrams(a);
    for (int i = 0; i < retur.size(); i++)
    {
        for (int j = 0; j < retur[i].size(); j++)
        {
            cout << retur[i][j] << " ";
        }
        cout << endl;
    }
}